/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 034c66e4; name: FUN_034c66e4
 */


void FUN_034c66e4(long param_1,long param_2,long param_3,int param_4)

{
  long *plVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  int iVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  long *plVar10;
  undefined8 *puVar12;
  undefined8 *puVar11;
  long *plVar13;
  long lVar14;
  
  puVar4 = PTR_DAT_047e2fd0;
  uVar2 = *(uint *)(param_1 + 0x38);
  if (uVar2 != 0) {
    uVar3 = 0;
    if (uVar2 != 0) {
      uVar3 = (uint)param_2 / uVar2;
    }
    for (plVar13 = *(long **)(*(long *)(param_1 + 0x30) + (ulong)((uint)param_2 - uVar3 * uVar2) * 8
                             ); plVar13 != (long *)0x0; plVar13 = (long *)*plVar13) {
      if (plVar13[1] == param_2) {
        lVar14 = plVar13[2];
        if (lVar14 == 0) {
          return;
        }
        plVar10 = *(long **)(lVar14 + 0x30);
        if (plVar10 == (long *)0x0) {
          plVar10 = (long *)(**(code **)(PTR_DAT_047e2fd0 + 0x10))(4,0xf0);
          if (plVar10 == (long *)0x0) {
            return;
          }
          *plVar10 = (long)(PTR_DAT_047e6e40 + 0x10);
          plVar10[1] = 0;
          puVar5 = PTR_DAT_047e6958;
          lVar9 = *(long *)(PTR_DAT_047e6958 + 8);
          plVar10[2] = 0;
          plVar10[3] = lVar9;
          plVar1 = (long *)(puVar5 + 0x10);
          if (*(long *)(puVar5 + 0x10) != 0) {
            plVar1 = (long *)(lVar9 + 0x10);
          }
          *plVar1 = (long)plVar10;
          *(long **)(puVar5 + 8) = plVar10;
          *(int *)puVar5 = *(int *)puVar5 + 1;
          puVar5 = PTR_DAT_047e6e48;
          *(undefined2 *)(plVar10 + 0x1c) = 0;
          plVar10[8] = 0;
          plVar10[9] = 0;
          plVar10[0xc] = 0;
          plVar10[0xd] = 0;
          *plVar10 = (long)(puVar5 + 0x10);
          plVar10[0x12] = 0;
          plVar10[0x13] = 0;
          plVar10[0x16] = 0;
          plVar10[0x17] = 0;
          plVar10[0x1a] = 0;
          plVar10[0x1b] = 0;
          *(long **)(lVar14 + 0x30) = plVar10;
          plVar10[1] = lVar14;
          iVar6 = (**(code **)(*plVar10 + 0x10))(plVar10,*(undefined8 *)(lVar14 + 0x78));
          if (iVar6 != 1) {
            (**(code **)*plVar10)(plVar10);
            (**(code **)(puVar4 + 0x30))(4,plVar10);
            *(undefined8 *)(lVar14 + 0x30) = 0;
            return;
          }
        }
        if (param_4 == 2) {
          lVar14 = plVar10[0x1c];
          uVar7 = FUN_03477304(plVar10);
          uVar8 = FUN_0347702c(plVar10 + 4,param_3);
          if (((uVar7 & 1) != 0) || ((uVar8 & 1) != 0)) goto LAB_034c68bc;
          if ((char)lVar14 != '\0') goto LAB_034c6900;
          *(undefined1 *)(plVar10 + 0x1c) = 0;
          *(undefined4 *)(plVar10 + 9) = 0;
          *(undefined4 *)(plVar10 + 0xd) = 0;
          goto LAB_034c68bc;
        }
        if (param_4 == 1) {
          if (*(int *)(param_3 + 0x18) != 0) {
            puVar11 = *(undefined8 **)(param_3 + 0x10);
            do {
              puVar12 = puVar11 + 1;
              FUN_034c70dc(param_1,*puVar11);
              puVar11 = puVar12;
            } while (puVar12 !=
                     (undefined8 *)
                     (*(long *)(param_3 + 0x10) + (ulong)*(uint *)(param_3 + 0x18) * 8));
          }
          FUN_03477e10(plVar10,param_3);
        }
        else {
          if (param_4 != 0) goto LAB_034c6900;
          if (*(int *)(param_3 + 0x18) != 0) {
            puVar11 = *(undefined8 **)(param_3 + 0x10);
            do {
              puVar12 = puVar11 + 1;
              FUN_034c70dc(param_1,*puVar11);
              puVar11 = puVar12;
            } while (puVar12 !=
                     (undefined8 *)
                     (*(long *)(param_3 + 0x10) + (ulong)*(uint *)(param_3 + 0x18) * 8));
          }
          lVar14 = plVar10[0x1c];
          *(undefined1 *)(plVar10 + 0x1c) = 1;
          uVar7 = FUN_03476db8(plVar10 + 4,param_3);
          if (((char)lVar14 == '\0') || ((uVar7 & 1) != 0)) {
LAB_034c68bc:
            FUN_03477638(plVar10);
          }
        }
LAB_034c6900:
        if (*(int *)PTR_DAT_047e7008 != 2) {
          *(undefined4 *)PTR_DAT_047e7008 = 1;
        }
        lVar14 = *(long *)(plVar13[2] + 0x28);
        if (lVar14 == 0) {
          return;
        }
        *(byte *)(lVar14 + 0x54) = *(byte *)(lVar14 + 0x54) | 1;
        FUN_034c696c(lVar14 + 0x20,plVar10 + 0x18);
        return;
      }
    }
  }
  return;
}


