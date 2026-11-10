/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 033a60f0; name: FUN_033a60f0
 */


void FUN_033a60f0(long param_1,int param_2,int param_3,long param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  ulong uVar7;
  uint uVar8;
  uint *puVar9;
  long lVar10;
  undefined8 uVar11;
  uint *puVar12;
  int iVar13;
  
LAB_033a6118:
  uVar7 = *(ulong *)(param_1 + (long)(param_2 + param_3 >> 1) * 8);
  uVar6 = (uint)uVar7;
  iVar13 = param_2;
  iVar5 = param_3;
LAB_033a6134:
  lVar10 = *(long *)(param_4 + 0xf0);
  iVar1 = *(int *)(lVar10 + (long)(int)uVar6 * 0x18 + 4);
  puVar9 = (uint *)(param_1 + (long)iVar13 * 8);
  do {
    uVar4 = *puVar9;
    iVar2 = *(int *)(lVar10 + (long)(int)uVar4 * 0x18 + 4);
    if (iVar1 <= iVar2) {
      uVar8 = (uint)(uVar7 >> 0x20);
      if (iVar1 < iVar2) break;
      if (uVar6 <= uVar4) {
        if (uVar6 < uVar4) break;
        uVar4 = *(uint *)(*(long *)(param_4 + 8) + (ulong)puVar9[1]);
        uVar3 = *(uint *)(*(long *)(param_4 + 8) + (uVar7 >> 0x20));
        if ((uVar3 <= uVar4) && ((uVar8 <= puVar9[1] || (uVar4 != uVar3)))) break;
      }
    }
    iVar13 = iVar13 + 1;
    puVar9 = puVar9 + 2;
  } while( true );
  puVar12 = (uint *)(param_1 + (long)iVar5 * 8);
  do {
    uVar4 = *puVar12;
    iVar2 = *(int *)(lVar10 + (long)(int)uVar4 * 0x18 + 4);
    if (iVar2 <= iVar1) {
      if (iVar2 < iVar1) break;
      if (uVar4 <= uVar6) {
        if (uVar4 < uVar6) break;
        uVar4 = *(uint *)(*(long *)(param_4 + 8) + (uVar7 >> 0x20));
        uVar3 = *(uint *)(*(long *)(param_4 + 8) + (ulong)puVar12[1]);
        if ((uVar3 <= uVar4) && ((puVar12[1] <= uVar8 || (uVar4 != uVar3)))) break;
      }
    }
    iVar5 = iVar5 + -1;
    puVar12 = puVar12 + -2;
  } while( true );
  if (iVar13 <= iVar5) {
    if (iVar13 != iVar5) {
      uVar11 = *(undefined8 *)puVar12;
      *(undefined8 *)puVar12 = *(undefined8 *)puVar9;
      *(undefined8 *)puVar9 = uVar11;
    }
    iVar5 = iVar5 + -1;
    iVar13 = iVar13 + 1;
  }
  if (iVar5 < iVar13) goto code_r0x033a6230;
  goto LAB_033a6134;
code_r0x033a6230:
  if (param_2 < iVar5) {
    FUN_033a60f0(param_1,param_2,iVar5,param_4);
  }
  param_2 = iVar13;
  if (param_3 <= iVar13) {
    return;
  }
  goto LAB_033a6118;
}


