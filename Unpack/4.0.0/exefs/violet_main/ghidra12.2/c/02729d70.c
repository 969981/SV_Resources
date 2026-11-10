/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 02729d70; name: FUN_02729d70
 */


void FUN_02729d70(long *param_1,long *param_2)

{
  undefined8 uVar1;
  long *plVar2;
  ulong uVar3;
  long lVar4;
  undefined *puVar5;
  long lVar6;
  float *pfVar7;
  undefined8 *puVar8;
  void *__dest;
  long lVar9;
  undefined4 local_84;
  ulong local_80;
  undefined *puStack_78;
  undefined8 local_70;
  long *local_68;
  
  lVar6 = *(long *)param_1[7];
  FUN_00c41540(lVar6);
  pfVar7 = (float *)(lVar6 + 0x7c);
  lVar6 = -0x1110;
  do {
    lVar9 = *(long *)(lVar6 + 0x45d4d90);
    if (lVar9 != 0) {
      if (*(long *)(*param_2 + 0xf8) == 0) {
        local_80 = local_80 & 0xffffffff00000000;
LAB_02729e10:
        *pfVar7 = *(float *)(lVar6 + 0x45d4d98);
      }
      else {
        plVar2 = (long *)(*(long *)(*param_2 + 0xf8) + 0x30);
        uVar3 = (**(code **)(*plVar2 + 0x10))(plVar2,pfVar7,lVar9);
        if ((uVar3 & 1) == 0) {
          local_80 = local_80 & 0xffffffff00000000;
          if ((*(long *)(*param_2 + 0xf8) == 0) ||
             (plVar2 = (long *)(*(long *)(*param_2 + 0xf8) + 0x30),
             uVar3 = (**(code **)(*plVar2 + 0x30))(plVar2,&local_80,lVar9), (uVar3 & 1) == 0))
          goto LAB_02729e10;
          *pfVar7 = (float)(int)local_80;
        }
      }
      pfVar7 = pfVar7 + 1;
    }
    lVar6 = lVar6 + 0x10;
    if (lVar6 == 0) {
      lVar9 = *(long *)param_1[0xb];
      FUN_00c41540(lVar9);
      lVar6 = 0;
      puVar8 = (undefined8 *)(lVar9 + 0x7c);
      do {
        if (*(long *)((long)&DAT_0485a168 + lVar6) != 0) {
          if ((*(long *)(*param_2 + 0xf8) == 0) ||
             (plVar2 = (long *)(*(long *)(*param_2 + 0xf8) + 0x30),
             uVar3 = (**(code **)(*plVar2 + 0x20))(plVar2,puVar8), (uVar3 & 1) == 0)) {
            uVar1 = *(undefined8 *)((long)&DAT_0485a178 + lVar6);
            *puVar8 = *(undefined8 *)((long)&DAT_0485a170 + lVar6);
            puVar8[1] = uVar1;
          }
          puVar8 = puVar8 + 2;
        }
        lVar6 = lVar6 + 0x18;
      } while (lVar6 != 0xa08);
      lVar6 = *(long *)param_1[0xf];
      FUN_00c41540(lVar6);
      __dest = (void *)(lVar6 + 0x7c);
      if (DAT_0485ab70 != 0) {
        if ((*(long *)(*param_2 + 0xf8) == 0) ||
           (plVar2 = (long *)(*(long *)(*param_2 + 0xf8) + 0x30),
           uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,__dest), (uVar3 & 1) == 0)) {
          memcpy(__dest,&DAT_0485ab78,0x40);
        }
        __dest = (void *)(lVar6 + 0xbc);
      }
      if ((DAT_0485abb8 != 0) &&
         ((*(long *)(*param_2 + 0xf8) == 0 ||
          (plVar2 = (long *)(*(long *)(*param_2 + 0xf8) + 0x30),
          uVar3 = (**(code **)(*plVar2 + 0x28))(plVar2,__dest), (uVar3 & 1) == 0)))) {
        memcpy(__dest,&DAT_0485abc0,0x40);
      }
      lVar6 = *param_2;
      uVar3 = (*(long *)(lVar6 + 0x90) - *(long *)(lVar6 + 0x88) >> 3) * 0x3e0f83e1;
      if ((int)uVar3 != 0) {
        lVar9 = 0;
        puVar5 = PTR_s_EnableBlendStateOpaque_047e10d0;
        while( true ) {
          lVar4 = *(long *)(*(long *)(lVar6 + 0x88) + lVar9);
          puStack_78 = puVar5;
          if (lVar4 == -0x731be2a73c015b78 || lVar4 == -0x66d38bab2c9b4101) {
            if (*(int *)(*(long *)(lVar6 + 0x88) + 0xb8) == 0) {
              local_80 = 0x196afeeea944aecd;
              local_70 = 0x1f;
              local_68 = (long *)0x0;
              local_84 = 0x3f800000;
              (**(code **)(*param_1 + 0x38))(param_1,&local_80,&local_84);
              if (local_68 != (long *)0x0) {
                (**(code **)(*local_68 + 0x20))();
              }
            }
          }
          else if (lVar4 == 0xbad51c2e071c243) {
            local_80 = 0x196afeeea944aecd;
            local_84 = 0x3f800000;
            local_70 = 0x1f;
            local_68 = (long *)0x0;
            (**(code **)(*param_1 + 0x38))(param_1,&local_80,&local_84);
            puVar5 = PTR_s_EnableBlendStateOpaque_047e10d0;
            if (local_68 != (long *)0x0) {
              (**(code **)(*local_68 + 0x20))();
              puVar5 = PTR_s_EnableBlendStateOpaque_047e10d0;
            }
          }
          if ((uVar3 & 0xffffffff) * 0x108 + -0x108 == lVar9) break;
          lVar6 = *param_2;
          lVar9 = lVar9 + 0x108;
        }
      }
      return;
    }
  } while( true );
}


