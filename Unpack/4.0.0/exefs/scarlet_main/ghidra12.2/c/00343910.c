/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 00343910; name: FUN_00343910
 */


undefined8 FUN_00343910(ulong *param_1,ulong *param_2)

{
  int iVar1;
  void *__ptr;
  undefined8 uVar2;
  long lVar3;
  undefined8 *puVar4;
  ulong uVar5;
  ulong uVar6;
  ulong uVar7;
  char *__s2;
  ulong uVar8;
  undefined8 *puVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  if (param_1 != (ulong *)0x0) {
    if (param_2 != (ulong *)0x0) {
      __ptr = (void *)FUN_0038c780((*param_2 + *param_1) * 0x20);
      if (*param_1 == 0) {
        uVar6 = 0;
        uVar5 = *param_2;
      }
      else {
        lVar3 = 0;
        uVar5 = 0;
        do {
          puVar4 = (undefined8 *)(param_1[1] + lVar3);
          puVar9 = (undefined8 *)((long)__ptr + lVar3);
          uVar2 = *puVar4;
          uVar11 = puVar4[3];
          uVar10 = puVar4[2];
          puVar9[1] = puVar4[1];
          *puVar9 = uVar2;
          puVar9[3] = uVar11;
          puVar9[2] = uVar10;
          uVar6 = *param_1;
          uVar5 = uVar5 + 1;
          lVar3 = lVar3 + 0x20;
        } while (uVar5 < uVar6);
        uVar5 = *param_2;
      }
      if (uVar5 == 0) {
LAB_00343a4c:
        uVar2 = FUN_003435b0(0,0,0,__ptr,uVar6);
        free(__ptr);
        return uVar2;
      }
      uVar8 = 0;
      puVar4 = (undefined8 *)param_2[1];
      uVar7 = uVar6;
      do {
        if (uVar7 != 0) {
          puVar9 = (undefined8 *)(param_1[1] + 8);
          __s2 = (char *)puVar4[1];
          do {
            iVar1 = strcmp((char *)*puVar9,__s2);
            if (iVar1 == 0) goto LAB_00343a28;
            uVar7 = uVar7 - 1;
            puVar9 = puVar9 + 4;
          } while (uVar7 != 0);
        }
        uVar2 = *puVar4;
        uVar11 = puVar4[3];
        uVar10 = puVar4[2];
        puVar9 = (undefined8 *)((long)__ptr + uVar6 * 0x20);
        uVar6 = uVar6 + 1;
        puVar9[1] = puVar4[1];
        *puVar9 = uVar2;
        puVar9[3] = uVar11;
        puVar9[2] = uVar10;
        uVar5 = *param_2;
LAB_00343a28:
        uVar8 = uVar8 + 1;
        if (uVar5 <= uVar8) goto LAB_00343a4c;
        uVar7 = *param_1;
        puVar4 = (undefined8 *)(param_2[1] + uVar8 * 0x20);
      } while( true );
    }
    param_2 = param_1;
  }
  uVar2 = FUN_003435b0(param_2,0,0,0,0);
  return uVar2;
}


