/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03477f30; name: FUN_03477f30
 */


void FUN_03477f30(ulong *param_1,long param_2)

{
  uint uVar1;
  ulong *puVar2;
  int iVar3;
  ulong *puVar4;
  ulong *puVar5;
  ulong *puVar6;
  ulong uVar7;
  ulong *puVar8;
  ulong *puVar9;
  ulong uVar10;
  ulong local_50 [2];
  ulong *local_40;
  undefined8 local_38;
  
  puVar6 = local_50;
  uVar1 = (uint)param_1[3];
  iVar3 = 0;
  if (uVar1 != 0) {
    puVar5 = (ulong *)param_1[2];
    puVar8 = puVar5 + uVar1;
    puVar9 = *(ulong **)(param_2 + 0x10);
    puVar2 = puVar9 + *(uint *)(param_2 + 0x18);
    do {
      if (puVar9 == puVar2) break;
      if (*puVar5 == *puVar9) {
        iVar3 = iVar3 + 1;
        puVar5 = puVar5 + 1;
LAB_03477fa0:
        puVar9 = puVar9 + 1;
      }
      else {
        if (*puVar9 <= *puVar5) goto LAB_03477fa0;
        puVar5 = puVar5 + 1;
      }
    } while (puVar5 != puVar8);
  }
  uVar1 = (*(uint *)(param_2 + 0x18) + uVar1) - iVar3;
  local_40 = (ulong *)0x0;
  local_38 = 0;
  if (uVar1 != 0) {
    if ((uVar1 != 1) &&
       (puVar6 = (ulong *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(4,0,(ulong)uVar1 << 3,0x10),
       puVar6 == (ulong *)0x0)) {
      return;
    }
    local_38 = (ulong)uVar1 << 0x20;
    local_40 = puVar6;
  }
  local_38 = CONCAT44(local_38._4_4_,uVar1);
  puVar2 = (ulong *)param_1[2];
  puVar6 = *(ulong **)(param_2 + 0x10);
  puVar5 = local_40;
  puVar9 = puVar2;
  puVar8 = puVar6;
  do {
    if (puVar6 == puVar8 + *(uint *)(param_2 + 0x18)) {
      if (puVar9 == puVar2 + (uint)param_1[3]) {
        if (puVar2 != (ulong *)0x0) {
          *(undefined4 *)(param_1 + 3) = 0;
          if (param_1 != puVar2) {
            (**(code **)(PTR_DAT_047e2fd0 + 0x30))(4);
          }
          param_1[2] = 0;
          *(undefined4 *)((long)param_1 + 0x1c) = 0;
        }
        if (local_50 == local_40) {
          *param_1 = local_50[0];
          local_40 = param_1;
        }
        param_1[2] = (ulong)local_40;
        *(undefined4 *)(param_1 + 3) = (undefined4)local_38;
        *(undefined4 *)((long)param_1 + 0x1c) = local_38._4_4_;
        return;
      }
      puVar4 = puVar9 + 1;
      *puVar5 = *puVar9;
    }
    else {
      uVar7 = *puVar6;
      if ((puVar9 == puVar2 + (uint)param_1[3]) || (uVar10 = *puVar9, uVar7 < uVar10)) {
        *puVar5 = uVar7;
        puVar6 = puVar6 + 1;
        puVar4 = puVar9;
      }
      else {
        *puVar5 = uVar10;
        puVar4 = puVar9 + 1;
        if (uVar7 <= uVar10) {
          puVar6 = puVar6 + 1;
        }
      }
    }
    puVar8 = *(ulong **)(param_2 + 0x10);
    puVar5 = puVar5 + 1;
    puVar2 = (ulong *)param_1[2];
    puVar9 = puVar4;
  } while( true );
}


