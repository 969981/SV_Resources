/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 027e955c; name: FUN_027e955c
 */


void FUN_027e955c(undefined1 *param_1,undefined8 param_2,char *param_3)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  byte bVar5;
  ushort uVar6;
  ushort uVar7;
  uint uVar8;
  ulong uVar9;
  long *plVar10;
  undefined1 *puVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  uint uVar14;
  ushort uVar15;
  byte bVar16;
  char local_a0 [4];
  byte local_9c;
  undefined8 local_70;
  undefined8 uStack_68;
  
  uVar9 = FUN_0278e8ec();
  uVar8 = (uint)uVar9;
  *param_1 = 0;
  if ((uVar9 & 0xffff) != 0) {
    bVar4 = false;
    bVar3 = false;
    bVar16 = 0;
    uVar15 = 0;
    uVar14 = 0;
    do {
      FUN_0278e920(&local_70,uVar9,uVar14);
      plVar10 = (long *)FUN_0278dcb0(&local_70);
      if (plVar10 != (long *)0x0) {
        if (*param_3 == '\0') {
LAB_027e9600:
          if ((plVar10[1] == 0) || (uVar9 = FUN_027e97e0(), (uVar9 & 1) == 0)) {
LAB_027e9610:
            uVar9 = (**(code **)(*plVar10 + 0x30))(plVar10);
            if ((uVar9 & 1) != 0) {
              uVar6 = (**(code **)(*plVar10 + 0x38))(plVar10);
              uVar7 = (**(code **)(*plVar10 + 0x28))(plVar10);
              if (uVar6 < uVar7) {
                uVar6 = (**(code **)(*plVar10 + 0x20))(plVar10);
                bVar5 = FUN_027e9824(plVar10 + 2);
                if (uVar15 <= uVar6) {
                  if (*param_3 == '\0') {
                    if (bVar16 < bVar5) {
                      *(undefined8 *)(param_1 + 8) = local_70;
                      *(undefined8 *)(param_1 + 0x10) = uStack_68;
                      if (!bVar4) {
                        *param_1 = 1;
                      }
                      bVar4 = true;
                      bVar3 = true;
                      uVar15 = uVar6;
                      bVar16 = bVar5;
                    }
                  }
                  else {
                    FUN_027e9400(local_a0,plVar10);
                    if (local_a0[0] != '\0') {
                      puVar11 = &DAT_cbf29ce484222645;
                      if (local_9c != 0) {
                        puVar11 = &DAT_cbf29ce484222645;
                        pbVar13 = (byte *)((ulong)local_a0 | 5);
                        bVar1 = local_9c;
                        do {
                          puVar11 = (undefined1 *)(((ulong)puVar11 ^ (ulong)bVar1) * 0x100000001b3);
                          bVar1 = *pbVar13;
                          pbVar13 = pbVar13 + 1;
                        } while (bVar1 != 0);
                      }
                      bVar1 = param_3[4];
                      if (bVar1 == 0) {
                        puVar12 = &DAT_cbf29ce484222645;
                      }
                      else {
                        puVar12 = &DAT_cbf29ce484222645;
                        pbVar13 = (byte *)(param_3 + 5);
                        do {
                          puVar12 = (undefined1 *)(((ulong)puVar12 ^ (ulong)bVar1) * 0x100000001b3);
                          bVar1 = *pbVar13;
                          pbVar13 = pbVar13 + 1;
                        } while (bVar1 != 0);
                      }
                      if ((bVar16 < bVar5) && (puVar11 == puVar12)) {
                        bVar2 = !bVar3;
                        *(undefined8 *)(param_1 + 8) = local_70;
                        *(undefined8 *)(param_1 + 0x10) = uStack_68;
                        bVar3 = true;
                        uVar15 = uVar6;
                        bVar16 = bVar5;
                        if (bVar2) {
                          *param_1 = 1;
                          bVar4 = true;
                          bVar3 = true;
                        }
                      }
                      local_a0[0] = '\0';
                    }
                  }
                }
              }
            }
          }
        }
        else if ((plVar10[1] != 0) && (uVar9 = FUN_027e97e0(), (uVar9 & 1) != 0)) {
          if (*param_3 == '\0') goto LAB_027e9600;
          goto LAB_027e9610;
        }
      }
      uVar9 = FUN_0278f0cc(&local_70);
      uVar14 = uVar14 + 1;
    } while (uVar14 != (uVar8 & 0xffff));
  }
  return;
}


