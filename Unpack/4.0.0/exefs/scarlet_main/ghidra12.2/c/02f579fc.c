/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f579fc; name: FUN_02f579fc
 */


void FUN_02f579fc(long *param_1,undefined8 param_2,ulong param_3)

{
  int iVar1;
  ulong uVar2;
  ulong uVar3;
  int iVar4;
  long lVar5;
  long lVar6;
  uint local_38 [2];
  
  lVar6 = *param_1;
  iVar1 = *(int *)(param_1[0x71] +
                   (long)*(int *)(*(long *)(lVar6 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0x80) *
                   0x20 + 0x10);
  if (iVar1 == -1) {
    uVar3 = *(ulong *)(*(long *)(lVar6 + 0x38) + (param_3 & 0xffffff) * 0xc0 + 0xb0);
    if ((long)uVar3 < 0) {
      uVar3 = uVar3 & 0xffffffff;
    }
    else {
      uVar2 = FUN_00dbb6c8(lVar6 + 0x960,uVar3,local_38);
      uVar3 = (ulong)local_38[0];
      if ((uVar2 & 1) == 0) {
        uVar3 = 0xffffff;
      }
    }
    FUN_02f35f08(lVar6,uVar3,0);
  }
  else {
    lVar6 = *(long *)(param_1[0x73] + (long)iVar1 * 8);
    *(undefined1 *)(lVar6 + 0x24) = 1;
    if (*(char *)(lVar6 + 0x25) == '\0') {
      iVar4 = (int)param_1[0x67];
      lVar5 = (long)iVar4;
      if ((int)(*(uint *)((long)param_1 + 0x33c) & 0x7fffffff) <= iVar4) {
        FUN_0133bb88(param_1 + 0x66,PTR_PTR_047d1a50,lVar5 + 1);
        iVar4 = (int)param_1[0x67];
      }
      *(int *)(param_1[0x66] + (long)iVar4 * 4) = iVar1;
      *(int *)(param_1 + 0x67) = (int)(lVar5 + 1);
      *(undefined1 *)(lVar6 + 0x25) = 1;
    }
  }
  return;
}


