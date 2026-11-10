/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00ba1a0c; name: FUN_00ba1a0c
 */


void FUN_00ba1a0c(undefined8 param_1,long param_2,long param_3)

{
  bool bVar1;
  ulong uVar2;
  int iVar3;
  size_t sVar4;
  ulong uVar5;
  long lVar6;
  long lVar7;
  long lVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long *plVar11;
  undefined8 local_260;
  undefined4 local_258;
  undefined8 local_230;
  undefined4 local_228;
  undefined8 local_200;
  undefined4 local_1f8;
  undefined8 local_1d0;
  undefined4 local_1c8;
  undefined8 local_1a0;
  undefined4 local_198;
  undefined8 local_170;
  undefined4 local_168;
  undefined8 local_140;
  undefined4 local_138;
  undefined8 local_110;
  undefined4 local_108;
  undefined8 local_e0;
  undefined4 local_d8;
  char *local_b0;
  undefined4 local_a8;
  char local_8f [15];
  ulong local_80 [4];
  
  if (0 < *(int *)(param_2 + 0x2c)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      FUN_00ba2628(param_1,*(long *)(param_2 + 0x30) + lVar7,
                   *(undefined8 *)(*(long *)(param_3 + 0x30) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x90;
    } while (lVar8 < *(int *)(param_2 + 0x2c));
  }
  if (0 < *(int *)(param_2 + 0x48)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      FUN_00ba1a0c(param_1,*(long *)(param_2 + 0x50) + lVar7,
                   *(undefined8 *)(*(long *)(param_3 + 0x60) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0xa8;
    } while (lVar8 < *(int *)(param_2 + 0x48));
  }
  if (0 < *(int *)(param_2 + 0x58)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      FUN_00ba1dc4(param_1,*(long *)(param_2 + 0x60) + lVar7,
                   *(undefined8 *)(*(long *)(param_3 + 0x78) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x38;
    } while (lVar8 < *(int *)(param_2 + 0x58));
  }
  if (0 < *(int *)(param_2 + 0x78)) {
    lVar7 = 0;
    lVar8 = 0;
    do {
      FUN_00ba2628(param_1,*(long *)(param_2 + 0x80) + lVar7,
                   *(undefined8 *)(*(long *)(param_3 + 0x48) + lVar8 * 8 + 8));
      lVar8 = lVar8 + 1;
      lVar7 = lVar7 + 0x90;
    } while (lVar8 < *(int *)(param_2 + 0x78));
  }
  lVar8 = 0x1fffffff;
  if (*(char *)(*(long *)(param_2 + 0x20) + 0x50) != '\0') {
    lVar8 = 0x7fffffff;
  }
  iVar3 = *(int *)(param_2 + 0x68);
  if (0 < iVar3) {
    lVar7 = 0;
    do {
      if (lVar8 + 1 < (long)*(int *)(*(long *)(param_2 + 0x70) + lVar7 * 8 + 4)) {
        uVar9 = *(undefined8 *)(param_2 + 8);
        uVar10 = *(undefined8 *)(*(long *)(param_3 + 0x90) + lVar7 * 8 + 8);
        local_8f[0] = '\0';
        local_b0 = local_8f;
        lVar6 = lVar8;
        do {
          local_b0 = local_b0 + -1;
          *local_b0 = (char)lVar6 + (char)(lVar6 / 10) * -10 + '0';
          bVar1 = 9 < lVar6;
          lVar6 = lVar6 / 10;
        } while (bVar1);
        sVar4 = strlen(local_b0);
        local_80[1] = 0;
        local_80[2] = 0;
        local_a8 = (undefined4)sVar4;
        local_e0 = 0;
        local_d8 = 0xffffffff;
        local_110 = 0;
        local_108 = 0xffffffff;
        local_140 = 0;
        local_138 = 0xffffffff;
        local_170 = 0;
        local_168 = 0xffffffff;
        local_1a0 = 0;
        local_198 = 0xffffffff;
        local_1d0 = 0;
        local_1c8 = 0xffffffff;
        local_200 = 0;
        local_1f8 = 0xffffffff;
        local_230 = 0;
        local_228 = 0xffffffff;
        local_260 = 0;
        local_258 = 0xffffffff;
        local_80[0] = 0;
        FUN_00c2ce10(local_80,"Extension numbers cannot be greater than $0.",&local_b0,&local_e0,
                     &local_110,&local_140,&local_170,&local_1a0,&local_1d0,&local_200,&local_230,
                     &local_260);
        FUN_00b89f94(param_1,uVar9,uVar10,1,local_80);
        uVar2 = local_80[2];
        if (((local_80[0] & 1) != 0) && (local_80[2] != 0)) {
          lVar6 = tpidr_el0;
          plVar11 = *(long **)(lVar6 + 0x30);
          if (plVar11 == (long *)0x0) {
            if (((DAT_04859438 & 1) == 0) &&
               (iVar3 = __cxa_guard_acquire(&DAT_04859438), iVar3 != 0)) {
              DAT_04859430 = DAT_04859418;
              __cxa_guard_release(&DAT_04859438);
            }
            plVar11 = DAT_04859430;
            *(long **)(lVar6 + 0x30) = DAT_04859430;
          }
          uVar5 = (**(code **)(*plVar11 + 0xf8))(plVar11);
          if (((uVar5 & 1) == 0) || (lVar6 = FUN_00c4e600(), *(int *)(lVar6 + 0x12c8) < 1)) {
            (**(code **)(*plVar11 + 0x18))(plVar11,uVar2,0,8);
          }
          else {
            FUN_00c48fe8(plVar11,uVar2,0,8);
          }
        }
        iVar3 = *(int *)(param_2 + 0x68);
      }
      lVar7 = lVar7 + 1;
    } while (lVar7 < iVar3);
  }
  return;
}


