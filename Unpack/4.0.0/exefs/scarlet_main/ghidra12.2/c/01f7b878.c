/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 01f7b878; name: FUN_01f7b878
 */


undefined8 FUN_01f7b878(undefined8 param_1,undefined4 param_2)

{
  undefined8 uVar1;
  undefined *puVar2;
  
  puVar2 = &DAT_03d318d4;
  switch(param_2) {
  case 1:
    break;
  case 2:
    puVar2 = &DAT_03d34294;
    break;
  case 3:
    puVar2 = &DAT_03d36c54;
    break;
  case 4:
    puVar2 = &DAT_03d39614;
    break;
  case 5:
    puVar2 = &DAT_03d3bfd4;
    break;
  case 6:
    puVar2 = &DAT_03d3e994;
    break;
  case 7:
    puVar2 = &DAT_03d41354;
    break;
  case 8:
    puVar2 = &DAT_03d43d14;
    break;
  case 9:
    puVar2 = &DAT_03d466d4;
    break;
  case 10:
    puVar2 = &DAT_03d49094;
    break;
  case 0xb:
    puVar2 = &DAT_03d4ba54;
    break;
  case 0xc:
    puVar2 = &DAT_03d4e414;
    break;
  case 0xd:
    puVar2 = &DAT_03d50dd4;
    break;
  case 0xe:
    puVar2 = &DAT_03d53794;
    break;
  case 0xf:
    puVar2 = &DAT_03d56154;
    break;
  case 0x10:
    puVar2 = &DAT_03d58b14;
    break;
  default:
    return 0;
  }
  uVar1 = FUN_01e71748(param_1,puVar2,0x29c0);
  return uVar1;
}


