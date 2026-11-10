/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 02e72238; name: FUN_02e72238
 */


void FUN_02e72238(long param_1)

{
  undefined8 *puVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  undefined8 uVar5;
  long lVar6;
  ulong uVar7;
  uint uVar8;
  uint uVar9;
  long lVar10;
  long lVar11;
  long *plVar12;
  
  lVar6 = *(long *)(param_1 + 8);
  if (0 < *(int *)(lVar6 + 0x18)) {
    lVar10 = 0;
    lVar4 = tpidr_el0;
    do {
      lVar11 = *(long *)(*(long *)(lVar6 + 0x10) + lVar10 * 8);
      if (*(char *)(lVar11 + 0x1afd) != '\0') {
        lVar6 = *(long *)(lVar4 + 0x1000b8);
        if (lVar6 == 0) {
          lVar6 = FUN_00e5d3b4();
          *(long *)(lVar4 + 0x1000b8) = lVar6;
        }
        plVar12 = *(long **)(lVar6 + 0x3e0);
        if (plVar12 != (long *)0x0) {
          lVar6 = *plVar12;
          if (*(code **)(lVar6 + 0x18) != (code *)0x0) {
            (**(code **)(lVar6 + 0x18))
                      ("updateBroadphaseIdMapping",0x19,*(undefined8 *)(lVar6 + 0x28));
          }
          puVar1 = (undefined8 *)plVar12[2];
          uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
          if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
            *puVar1 = "TtupdateBroadphaseIdMapping";
            uVar5 = nn::os::GetSystemTick();
            puVar1[1] = uVar5;
          }
          if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
            puVar1 = (undefined8 *)plVar12[2];
            uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
            if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
              *puVar1 = &DAT_03c4e575;
              puVar1[1] = *(undefined8 *)(plVar12[6] + 8);
            }
          }
        }
        uVar2 = *(uint *)(lVar11 + 0x58);
        if (0 < (int)uVar2) {
          lVar6 = *(long *)(lVar11 + 0x50);
          uVar9 = (uint)lVar10;
          if (uVar2 == 1) {
            uVar7 = 0;
          }
          else {
            uVar7 = 0;
            uVar8 = 0x20;
            do {
              lVar11 = lVar6 + uVar7 * 0x10;
              *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x130) + (long)*(int *)(lVar11 + 0xc) * 4
                       ) = uVar8 - 0x20 | uVar9;
              uVar7 = uVar7 + 2;
              uVar3 = uVar8 | uVar9;
              uVar8 = uVar8 + 0x40;
              *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x130) +
                       (long)*(int *)(lVar11 + 0x1c) * 4) = uVar3;
            } while (((ulong)uVar2 & 0xfffffffe) != uVar7);
          }
          if ((uVar2 & 1) != 0) {
            *(uint *)(*(long *)(*(long *)(param_1 + 8) + 0x130) +
                     (long)*(int *)(lVar6 + uVar7 * 0x10 + 0xc) * 4) = uVar9 | (int)uVar7 << 5;
          }
        }
        *(undefined1 *)(*(long *)(*(long *)(*(long *)(param_1 + 8) + 0x10) + lVar10 * 8) + 0x1afd) =
             0;
        if (plVar12 != (long *)0x0) {
          lVar6 = *plVar12;
          if (((*(byte *)(lVar6 + 0x38) & 1) != 0) && (plVar12[6] != 0)) {
            puVar1 = (undefined8 *)plVar12[2];
            uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
            if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
              *puVar1 = &DAT_03c4e575;
              puVar1[1] = *(undefined8 *)(plVar12[6] + 8);
            }
          }
          puVar1 = (undefined8 *)plVar12[2];
          uVar7 = (long)puVar1 + 0x17U & 0xfffffffffffffff8;
          if ((uVar7 <= (ulong)plVar12[3]) && (plVar12[2] = uVar7, puVar1 != (undefined8 *)0x0)) {
            *puVar1 = &DAT_03c2d363;
            uVar5 = nn::os::GetSystemTick();
            puVar1[1] = uVar5;
          }
          if (*(code **)(lVar6 + 0x20) != (code *)0x0) {
            (**(code **)(lVar6 + 0x20))(*(undefined8 *)(lVar6 + 0x28));
          }
        }
        lVar6 = *(long *)(param_1 + 8);
      }
      lVar10 = lVar10 + 1;
    } while (lVar10 < *(int *)(lVar6 + 0x18));
  }
  return;
}


