/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 026ee310; name: FUN_026ee310
 */


undefined8 FUN_026ee310(long *param_1,ulong *param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  lVar5 = *param_1;
  lVar4 = param_1[2];
  lVar1 = lVar4 + 1;
  bVar2 = *(byte *)(lVar5 + lVar4);
  uVar3 = (ulong)bVar2;
  param_1[2] = lVar1;
  if (0x83 < uVar3) {
    return 0;
  }
  switch(bVar2) {
  case 0x80:
    uVar3 = (ulong)*(byte *)(lVar5 + lVar1);
    lVar4 = lVar4 + 2;
    break;
  case 0x81:
    uVar3 = (ulong)*(ushort *)(lVar5 + lVar1);
    lVar4 = lVar4 + 3;
    break;
  case 0x82:
    uVar3 = (ulong)*(uint *)(lVar5 + lVar1);
    lVar4 = lVar4 + 5;
    break;
  case 0x83:
    uVar3 = *(ulong *)(lVar5 + lVar1);
    lVar4 = lVar4 + 9;
    break;
  default:
    goto switchD_026ee358_default;
  }
  param_1[2] = lVar4;
switchD_026ee358_default:
  *param_2 = uVar3;
  return 1;
}


