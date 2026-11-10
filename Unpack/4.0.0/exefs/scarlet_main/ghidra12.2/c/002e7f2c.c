/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002e7f2c; name: FUN_002e7f2c
 */


undefined8 FUN_002e7f2c(byte *param_1,byte *param_2)

{
  byte *pbVar1;
  int iVar2;
  byte bVar3;
  char cVar4;
  byte *pbVar5;
  ulong uVar6;
  long lVar7;
  
  if (3 < *param_1 - 7) {
    return 0;
  }
  pbVar1 = param_1 + 8;
  if (*(ushort *)(param_1 + 6) < 2) {
    pbVar5 = *(byte **)pbVar1;
    bVar3 = *pbVar5;
  }
  else {
    pbVar5 = *(byte **)pbVar1;
    bVar3 = **(byte **)pbVar5;
  }
  if ((0x14 < bVar3 || (1 << (ulong)(bVar3 & 0x1f) & 0x101008U) == 0) && (bVar3 != 0xd)) {
    return 0;
  }
  if (3 < *param_2 - 7) goto LAB_002e801c;
  if (*(ushort *)(param_1 + 6) < 2) {
    if (*(ushort *)(param_2 + 6) < 2) goto LAB_002e7fbc;
LAB_002e7fec:
    uVar6 = FUN_002e55c0(pbVar5,**(undefined8 **)(param_2 + 8));
  }
  else {
    pbVar5 = *(byte **)pbVar5;
    if (1 < *(ushort *)(param_2 + 6)) goto LAB_002e7fec;
LAB_002e7fbc:
    uVar6 = FUN_002e55c0(pbVar5,*(undefined8 *)(param_2 + 8));
  }
  if (((uVar6 & 1) != 0) && (((*(ushort *)(param_2 + 2) ^ *(ushort *)(param_1 + 2)) >> 6 & 1) == 0))
  {
    return 1;
  }
LAB_002e801c:
  if (*(ushort *)(param_1 + 6) < 2) {
    uVar6 = FUN_002e55c0(*(undefined8 *)pbVar1,param_2);
  }
  else {
    uVar6 = FUN_002e55c0(**(undefined8 **)pbVar1,param_2);
  }
  if ((uVar6 & 1) != 0) {
    return 1;
  }
  if (*(ushort *)(param_1 + 6) < 2) {
    cVar4 = **(char **)pbVar1;
  }
  else {
    cVar4 = *(char *)**(undefined8 **)pbVar1;
  }
  if ((cVar4 == '\x03') && (*param_2 == 4)) {
    if (*(ushort *)(param_1 + 6) < 2) {
      lVar7 = *(long *)pbVar1;
      iVar2 = *(int *)(lVar7 + 0x18);
    }
    else {
      lVar7 = **(long **)pbVar1;
      iVar2 = *(int *)(lVar7 + 0x18);
    }
    if ((**(int **)(param_2 + 0x20) == iVar2) &&
       (((*(ushort *)(param_2 + 2) ^ *(ushort *)(lVar7 + 2)) & 1) == 0)) {
      return 1;
    }
  }
  return 0;
}


