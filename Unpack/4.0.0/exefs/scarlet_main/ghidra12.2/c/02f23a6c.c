/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02f23a6c; name: FUN_02f23a6c
 */


void FUN_02f23a6c(long param_1,undefined8 *param_2,long param_3)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long *plVar4;
  undefined8 *puVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  
  do {
    if (*(int *)((long)param_2 + 0xc) != 0) {
      uVar3 = *(ushort *)((long)param_2 + 10);
      uVar11 = (uint)uVar3;
      if (uVar3 != 0) {
        puVar9 = (uint *)*param_2;
        uVar10 = *(int *)((long)param_2 + 0xc) - (uint)uVar3;
        puVar8 = (uint *)((long)puVar9 + (ulong)*(ushort *)(param_2 + 1) + 0x20);
        do {
          while( true ) {
            if ((*puVar8 & 0x10000) == 0) {
              uVar3 = (ushort)*puVar8;
              if ((int)(*(int *)(param_3 + 0x18) + (uint)uVar3) < 0xfa1) {
                puVar5 = (undefined8 *)
                         (*(long *)(param_3 + 0x10) + (long)*(int *)(param_3 + 0x18) + 0x20);
              }
              else {
                puVar5 = (undefined8 *)FUN_031c36f4(param_3);
              }
              iVar6 = (uVar3 >> 4) + 1;
              puVar7 = puVar8;
              do {
                iVar6 = iVar6 + -1;
                uVar1 = puVar7[2];
                uVar2 = puVar7[3];
                *puVar5 = *(undefined8 *)puVar7;
                *(uint *)(puVar5 + 1) = uVar1;
                *(uint *)((long)puVar5 + 0xc) = uVar2;
                puVar7 = puVar7 + 4;
                puVar5 = puVar5 + 2;
              } while (1 < iVar6);
              *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + (uint)uVar3;
              *(int *)(param_3 + 0x1c) = *(int *)(param_3 + 0x1c) + 1;
            }
            else {
              plVar4 = *(long **)(param_1 + (ulong)*(byte *)((long)puVar8 + 3) * 8 + 8);
              (**(code **)(*plVar4 + 0x20))(plVar4,puVar8);
            }
            if (1 < (int)uVar11) break;
            if ((uVar10 == 0) || (puVar9 = *(uint **)(puVar9 + 2), puVar9 == (uint *)0x0))
            goto LAB_02f23bb0;
            uVar11 = *puVar9 & 0xffff;
            if ((int)uVar10 <= (int)(*puVar9 & 0xffff)) {
              uVar11 = uVar10;
            }
            if ((int)uVar11 < 1) goto LAB_02f23bb0;
            uVar10 = uVar10 - uVar11;
            puVar8 = puVar9 + 8;
            Hint_Prefetch(*(long *)(puVar9 + 2),0,0,0);
            Hint_Prefetch(*(long *)(puVar9 + 2) + 0x40,0,0,0);
            Hint_Prefetch(puVar9 + 0x20,0,0,0);
            Hint_Prefetch(puVar9 + 0x30,0,0,0);
            if (puVar8 == (uint *)0x0) goto LAB_02f23bb0;
          }
          uVar11 = uVar11 - 1;
          puVar8 = (uint *)((long)puVar8 + (ulong)(ushort)*puVar8);
        } while (puVar8 != (uint *)0x0);
      }
    }
LAB_02f23bb0:
    param_2 = (undefined8 *)param_2[2];
    if (param_2 == (undefined8 *)0x0) {
      return;
    }
  } while( true );
}


