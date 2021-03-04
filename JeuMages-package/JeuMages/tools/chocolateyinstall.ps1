﻿$ErrorActionPreference = 'Stop';

$packageName= 'jeumages'
$toolsDir   = "$(Split-Path -parent $MyInvocation.MyCommand.Definition)"
$fileLocation = Join-Path $toolsDir 'jeumages.0.1.Installer.exe'

$packageArgs = @{
  packageName   = $packageName
  fileType      = 'exe'
  file         = $fileLocation

  silentArgs    = "/S"
  validExitCodes= @(0)
}

Install-ChocolateyInstallPackage @packageArgs