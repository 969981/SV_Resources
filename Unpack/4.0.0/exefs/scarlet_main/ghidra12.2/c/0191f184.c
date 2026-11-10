/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0191f184; name: FUN_0191f184
 */


bool FUN_0191f184(long param_1,int *param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  ulong uVar5;
  ushort *puVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  
  if ((*(ushort *)((long)param_2 - (long)*param_2) < 0xb) ||
     (uVar5 = (ulong)((ushort *)((long)param_2 - (long)*param_2))[5], uVar5 == 0)) {
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)((long)param_2 + uVar5);
  }
  piVar3 = (int *)FUN_011e2dd4(*(undefined8 *)
                                (*(long *)(*(long *)(*(long *)(param_1 + 0x50) + 0x290) + 8) + 0x50)
                               ,param_3);
  if (piVar3 == (int *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = *piVar3;
    if (4 < iVar4) {
      iVar4 = 0;
    }
  }
  if (iVar4 == iVar8) {
    puVar6 = (ushort *)((long)param_2 - (long)*param_2);
    if (*puVar6 < 7) {
      uVar7 = 0;
      uVar9 = 0;
LAB_0191f24c:
      uVar2 = FUN_0191f29c(*(undefined8 *)(*(long *)(param_1 + 0x50) + 0x290),param_3);
      if (uVar9 != (uVar2 & 0xff)) goto LAB_0191f1f8;
    }
    else {
      if ((ulong)puVar6[3] == 0) {
        uVar9 = 0;
      }
      else {
        uVar9 = *(uint *)((long)param_2 + (ulong)puVar6[3]);
      }
      if ((*puVar6 < 9) || ((ulong)puVar6[4] == 0)) {
        uVar7 = 0;
      }
      else {
        uVar7 = *(uint *)((long)param_2 + (ulong)puVar6[4]);
      }
      if (uVar9 < 6) goto LAB_0191f24c;
    }
    bVar1 = uVar7 == (param_4 & 0xffff);
  }
  else {
LAB_0191f1f8:
    bVar1 = false;
  }
  return bVar1;
}


