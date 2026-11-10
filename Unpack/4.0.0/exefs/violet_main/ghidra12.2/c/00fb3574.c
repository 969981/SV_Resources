/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00fb3574; name: FUN_00fb3574
 */


void FUN_00fb3574(long param_1)

{
  ulong uVar1;
  int *piVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  long lVar7;
  long *plVar8;
  long lVar9;
  undefined8 local_198;
  char *local_190;
  undefined8 local_188;
  long *local_180 [8];
  undefined1 auStack_140 [64];
  undefined8 local_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  char *local_e0;
  undefined8 uStack_d8;
  long *local_d0;
  undefined1 auStack_c8 [24];
  undefined1 auStack_b0 [24];
  undefined1 auStack_98 [24];
  undefined1 auStack_80 [32];
  
  iVar6 = *(int *)(param_1 + 0x44);
  iVar5 = 7;
  switch(iVar6) {
  case 0:
    uVar1 = FUN_00fb5008(param_1);
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  case 1:
    FUN_00fb9e50(&local_198,param_1 + 0x440,param_1 + 0x340);
    *(undefined8 *)(param_1 + 0x550) = local_188;
    *(char **)(param_1 + 0x548) = local_190;
    *(undefined8 *)(param_1 + 0x540) = local_198;
    FUN_00fb9ce0(param_1 + 0x558,local_180);
    FUN_00fb9ce0(param_1 + 0x598,auStack_140);
    FUN_00db239c(auStack_140);
    FUN_00db239c(local_180);
    FUN_00fb9e50(&local_198,param_1 + 0x480,param_1 + 0x380);
    *(undefined8 *)(param_1 + 0x5e8) = local_188;
    *(char **)(param_1 + 0x5e0) = local_190;
    *(undefined8 *)(param_1 + 0x5d8) = local_198;
    FUN_00fb9ce0(param_1 + 0x5f0,local_180);
    FUN_00fb9ce0(param_1 + 0x630,auStack_140);
    FUN_00db239c(auStack_140);
    FUN_00db239c(local_180);
    FUN_00fb9e50(&local_198,param_1 + 0x4c0,param_1 + 0x3c0);
    *(undefined8 *)(param_1 + 0x680) = local_188;
    *(char **)(param_1 + 0x678) = local_190;
    *(undefined8 *)(param_1 + 0x670) = local_198;
    FUN_00fb9ce0(param_1 + 0x688,local_180);
    FUN_00fb9ce0(param_1 + 0x6c8,auStack_140);
    FUN_00db239c(auStack_140);
    FUN_00db239c(local_180);
    FUN_00fb9e50(&local_198,param_1 + 0x500,param_1 + 0x400);
    *(undefined8 *)(param_1 + 0x718) = local_188;
    *(char **)(param_1 + 0x710) = local_190;
    *(undefined8 *)(param_1 + 0x708) = local_198;
    FUN_00fb9ce0(param_1 + 0x720,local_180);
    FUN_00fb9ce0(param_1 + 0x760,auStack_140);
    FUN_00db239c(auStack_140);
    FUN_00db239c(local_180);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  case 2:
    FUN_00fb4e18(param_1);
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  case 3:
    uVar1 = FUN_00fb4e4c();
    if ((uVar1 & 1) == 0) {
      return;
    }
    *(int *)(param_1 + 0x44) = *(int *)(param_1 + 0x44) + 1;
  case 4:
    FUN_00fc0e24(param_1);
    iVar6 = *(int *)(param_1 + 0x44) + 1;
    *(int *)(param_1 + 0x44) = iVar6;
  case 5:
    plVar8 = *(long **)(param_1 + 2000);
    if (plVar8 != (long *)0x0) {
      bVar3 = true;
      do {
        while (lVar9 = plVar8[3], *(char *)(lVar9 + 0xbc) == '\0') {
          iVar5 = *(int *)(lVar9 + 0xb8);
          if (iVar5 == 0) {
            uVar1 = FUN_00fb3a58(*(undefined8 *)(lVar9 + 0xb0));
            if ((uVar1 & 1) != 0) {
              *(int *)(lVar9 + 0xb8) = *(int *)(lVar9 + 0xb8) + 1;
LAB_00fb3650:
              lVar7 = *(long *)(lVar9 + 0xb0);
              if (((*(long *)(lVar7 + 0x120) == 0) ||
                  ((*(byte *)(*(long *)(lVar7 + 0x120) + 0x1e8) & 1) != 0)) &&
                 ((*(long *)(lVar7 + 0xe0) == 0 ||
                  ((*(byte *)(*(long *)(lVar7 + 0xe0) + 0x1e8) & 1) != 0)))) {
                local_100 = *(undefined8 *)(lVar7 + 0xc0);
                local_f8 = *(undefined8 *)(lVar7 + 200);
                uStack_f0 = *(undefined8 *)(lVar7 + 0xd0);
              }
              else {
                local_f8 = 0;
                uStack_f0 = 0;
                local_100 = 0;
              }
              local_180[0] = (long *)0x0;
              local_198 = 0x8029861655f5d3d1;
              local_190 = "Category";
              local_188 = 8;
              piVar2 = (int *)FUN_00d27b5c(&local_100,&local_198);
              if ((piVar2 == (int *)0x0) || (*(ushort *)((long)piVar2 - (long)*piVar2) < 7)) {
                uVar4 = 0;
              }
              else {
                uVar1 = (ulong)((ushort *)((long)piVar2 - (long)*piVar2))[3];
                uVar4 = 0;
                if (uVar1 != 0) {
                  uVar4 = *(undefined4 *)((long)piVar2 + uVar1);
                }
              }
              *(undefined4 *)(lVar9 + 0x40) = uVar4;
              if (local_180[0] != (long *)0x0) {
                (**(code **)(*local_180[0] + 0x20))();
              }
              local_d0 = (long *)0x0;
              local_e8 = 0xc23d664c2642cbc6;
              local_e0 = "UniqueCollision";
              uStack_d8 = 0xf;
              FUN_00d996a8(auStack_c8,&local_100,&local_e8);
              local_180[0] = (long *)0x0;
              local_198 = 0x967a4ff626173b30;
              local_190 = "Character";
              local_188 = 9;
              FUN_00d996a8(auStack_80,auStack_c8,&local_198);
              FUN_00fb4444(lVar9 + 0x50,auStack_80);
              if (local_180[0] != (long *)0x0) {
                (**(code **)(*local_180[0] + 0x20))();
              }
              local_198 = 0x45e24506a4634ddf;
              local_190 = "Event";
              local_188 = 5;
              local_180[0] = (long *)0x0;
              FUN_00d996a8(auStack_98,auStack_c8,&local_198);
              FUN_00fb4444(lVar9 + 0x70,auStack_98);
              if (local_180[0] != (long *)0x0) {
                (**(code **)(*local_180[0] + 0x20))();
              }
              local_198 = 0xbba050815142c8e;
              local_190 = "Camera";
              local_188 = 6;
              local_180[0] = (long *)0x0;
              FUN_00d996a8(auStack_b0,auStack_c8,&local_198);
              FUN_00fb4444(lVar9 + 0x90,auStack_b0);
              if (local_180[0] != (long *)0x0) {
                (**(code **)(*local_180[0] + 0x20))();
              }
              if (local_d0 != (long *)0x0) {
                (**(code **)(*local_d0 + 0x20))();
              }
              iVar5 = *(int *)(lVar9 + 0xb8) + 2;
              *(int *)(lVar9 + 0xb8) = *(int *)(lVar9 + 0xb8) + 1;
              goto LAB_00fb37f0;
            }
          }
          else {
            if (iVar5 == 1) goto LAB_00fb3650;
            if (iVar5 != 2) goto LAB_00fb37fc;
            iVar5 = 3;
LAB_00fb37f0:
            *(undefined1 *)(lVar9 + 0xbc) = 1;
            *(int *)(lVar9 + 0xb8) = iVar5;
          }
LAB_00fb37fc:
          plVar8 = (long *)*plVar8;
          bVar3 = false;
          if (plVar8 == (long *)0x0) {
            return;
          }
        }
        plVar8 = (long *)*plVar8;
      } while (plVar8 != (long *)0x0);
      if (!bVar3) {
        return;
      }
      iVar6 = *(int *)(param_1 + 0x44);
    }
    *(int *)(param_1 + 0x44) = iVar6 + 1;
    iVar5 = iVar6 + 2;
  case 6:
    *(undefined1 *)(param_1 + 0x40) = 1;
    *(int *)(param_1 + 0x44) = iVar5;
    return;
  default:
    return;
  }
}


