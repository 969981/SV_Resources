/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02ee10c8; name: FUN_02ee10c8
 */


uint FUN_02ee10c8(long *param_1,undefined8 param_2,undefined4 *param_3,undefined2 *param_4,
                 int param_5)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  long lVar5;
  int iVar6;
  uint uVar7;
  long *plVar8;
  long lVar9;
  int iVar10;
  long lVar11;
  int iVar12;
  undefined2 local_68 [2];
  undefined8 local_64;
  undefined4 local_5c;
  undefined8 local_58;
  undefined8 local_50;
  long lStack_48;
  undefined4 local_40;
  undefined8 local_38;
  
  lVar9 = param_1[2];
  piVar1 = (int *)(lVar9 + 0x70);
  if (*(int *)(lVar9 + 0x74) == 2) {
    lVar11 = (long)*piVar1;
  }
  else {
    uVar7 = *(uint *)(param_1 + 0xc) | param_5 << 1;
    iVar4 = *piVar1;
    iVar10 = 0;
    iVar12 = *(int *)(lVar9 + 0x74) + -1;
    while( true ) {
      uVar2 = iVar12 + iVar10;
      if ((int)uVar2 < 0) {
        uVar2 = uVar2 + 1;
      }
      uVar3 = (int)uVar2 >> 1;
      lVar5 = (long)((ulong)uVar2 << 0x20) >> 0x21;
      uVar2 = *(uint *)((long)piVar1 +
                       (-(ulong)(uVar3 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar3 << 3) +
                       (long)iVar4);
      lVar11 = lVar5 + 1;
      if ((uVar2 <= uVar7) && (uVar7 < *(uint *)((long)piVar1 + lVar11 * 8 + (long)iVar4))) break;
      iVar6 = (int)lVar11;
      if (uVar7 <= uVar2) {
        iVar12 = uVar3 - 1;
        iVar6 = iVar10;
      }
      iVar10 = iVar6;
    }
    lVar11 = lVar5 * 8 + (long)iVar4;
  }
  (**(code **)(**(long **)*param_1 + 0x40))
            (*(long **)*param_1,*(undefined2 *)((long)piVar1 + lVar11 + 4),4,
             *(undefined8 *)param_1[3],((undefined8 *)param_1[3])[1],lVar9,*param_3,param_2,param_4)
  ;
  if (*(long *)(*param_1 + 8) == 0) {
    uVar7 = 1;
  }
  else {
    local_68[0] = *param_4;
    local_64 = *(undefined8 *)(param_4 + 2);
    local_5c = *(undefined4 *)(param_4 + 6);
    local_58 = *(undefined8 *)param_1[3];
    local_50 = ((undefined8 *)param_1[3])[1];
    lStack_48 = param_1[2];
    local_40 = *param_3;
    plVar8 = *(long **)(*param_1 + 8);
    local_38 = param_2;
    uVar7 = (**(code **)(*plVar8 + 0x40))(plVar8,4,1,param_1 + 5,local_68);
  }
  return uVar7 & 1;
}


