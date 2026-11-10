/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 030f8730; name: FUN_030f8730
 */


void FUN_030f8730(long *param_1,int param_2,long *param_3)

{
  int *piVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined *puVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  long lVar8;
  long lVar9;
  long lVar10;
  int *piVar11;
  long lVar12;
  int *piVar13;
  int *local_70;
  undefined8 local_68;
  
  lVar12 = *param_1;
  local_70 = (int *)0x0;
  local_68 = -0x8000000000000000;
  FUN_0087011c(param_1 + 8,lVar12 + (long)param_2 * 0x50,&local_70);
  puVar4 = PTR_DAT_047e4f38;
  lVar9 = tpidr_el0;
  if ((int)local_68 != 0) {
    piVar1 = local_70 + (int)local_68;
    piVar13 = local_70;
    do {
      uVar3 = *(uint *)(param_1 + 0xd);
      if (0 < (int)uVar3) {
        lVar8 = param_1[0xc];
        lVar10 = 0;
        lVar6 = 0;
        piVar11 = (int *)(lVar8 + 4);
        do {
          if ((piVar11[-1] == param_2) && (*piVar11 == *piVar13)) {
            if ((int)lVar10 != 1) {
              *(uint *)(param_1 + 0xd) = uVar3 - 1;
              if (uVar3 + (int)lVar10 != 1) {
                *(undefined8 *)(lVar8 + (lVar6 >> 0x1d)) =
                     *(undefined8 *)(lVar8 + (long)(int)(uVar3 - 1) * 8);
              }
              FUN_030fcd74(*param_3,-lVar10 & 0xffffffff);
              FUN_030fcff8(*param_3,-lVar10 & 0xffffffff);
            }
            break;
          }
          lVar10 = lVar10 + -1;
          lVar6 = lVar6 + 0x100000000;
          piVar11 = piVar11 + 2;
        } while ((ulong)uVar3 + lVar10 != 0);
      }
      iVar5 = *(int *)puVar4;
      lVar6 = *(long *)(lVar9 + 0x1000b8);
      if (lVar6 == 0) {
        lVar6 = FUN_00e5d3b4();
        *(long *)(lVar9 + 0x1000b8) = lVar6;
      }
      if (*(long *)(lVar6 + (long)iVar5 * 8 + 1000) != 0) {
        FUN_03231bdc();
      }
      piVar13 = piVar13 + 1;
    } while (piVar13 != piVar1);
  }
  lVar6 = local_68;
  uVar7 = (ulong)local_68._4_4_;
  lVar8 = (long)param_2;
  local_68 = (ulong)local_68._4_4_ << 0x20;
  if ((-1 < lVar6) && (local_70 != (int *)0x0)) {
    (**(code **)(*(long *)(PTR_PTR_047d1a50 + 0x20) + 0x20))
              (PTR_PTR_047d1a50 + 0x20,local_70,uVar7 << 2);
  }
  FUN_0086fc44(param_1 + 4,*(undefined4 *)(lVar12 + lVar8 * 0x50 + 0x44));
  lVar12 = (long)(int)param_1[1] + -1;
  iVar5 = (int)lVar12;
  *(int *)(param_1 + 1) = iVar5;
  if (iVar5 != param_2) {
    memcpy((void *)(*param_1 + lVar8 * 0x50),(void *)(*param_1 + lVar12 * 0x50),0x50);
  }
  iVar5 = *(int *)PTR_DAT_047e4f38;
  lVar12 = *(long *)(lVar9 + 0x1000b8);
  if (lVar12 == 0) {
    lVar12 = FUN_00e5d3b4();
    *(long *)(lVar9 + 0x1000b8) = lVar12;
  }
  if (*(long *)(lVar12 + (long)iVar5 * 8 + 1000) != 0) {
    FUN_03231bdc();
  }
  if ((int)param_1[1] != param_2) {
    FUN_0086f828(param_1 + 4,*(undefined4 *)(*param_1 + lVar8 * 0x50 + 0x44),param_2);
    iVar5 = (int)param_1[0xd];
    if (0 < iVar5) {
      lVar6 = 0;
      lVar12 = 0;
      lVar9 = 0;
      do {
        if (*(int *)(param_1[0xc] + lVar6) == (int)param_1[1]) {
          *(int *)(param_1[0xc] + lVar6) = param_2;
          lVar8 = *param_3;
          uVar2 = ((undefined4 *)(param_1[0xc] + lVar6))[1];
          *(undefined4 *)(*(long *)(lVar8 + 0xb0) + lVar12) = *(undefined4 *)(param_1[0xc] + lVar6);
          *(undefined4 *)(*(long *)(lVar8 + 0xb0) + lVar12 + 4) = uVar2;
          iVar5 = (int)param_1[0xd];
        }
        lVar9 = lVar9 + 1;
        lVar12 = lVar12 + 0x60;
        lVar6 = lVar6 + 8;
      } while (lVar9 < iVar5);
    }
  }
  return;
}


