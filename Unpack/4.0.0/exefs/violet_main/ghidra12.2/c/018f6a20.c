/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 018f6a20; name: FUN_018f6a20
 */


void FUN_018f6a20(undefined8 param_1)

{
  undefined1 uVar1;
  byte bVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  long lVar6;
  long *plVar7;
  ulong uVar8;
  ulong uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 *puVar12;
  int iVar13;
  undefined8 local_78;
  undefined8 local_70;
  undefined8 uStack_68;
  
  FUN_01251100();
  bVar2 = FUN_01251228();
  if (bVar2 != 0) {
    uVar10 = 0;
    do {
      uVar5 = FUN_01251100(param_1);
      lVar6 = FUN_01251234(uVar5,uVar10);
      uVar1 = *(undefined1 *)(lVar6 + 0x160);
      FUN_01582534(param_1);
      uVar5 = FUN_00f7e284();
      uVar5 = FUN_00f7e3c8(uVar5,uVar1);
      local_70 = 0;
      uStack_68 = 0;
      local_78 = 0;
      uVar3 = FUN_00f7e274();
      if ((uVar3 & 0xff) != 0) {
        plVar7 = (long *)FUN_0124e4c0(uVar5,0);
        if ((plVar7 == (long *)0x0) || (uVar8 = (**(code **)(*plVar7 + 0x208))(), (uVar8 & 1) != 0))
        {
          uVar8 = 0;
        }
        else {
          uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
          uVar8 = 1;
          local_78 = CONCAT44(local_78._4_4_,uVar4);
        }
        if (1 < (uVar3 & 0xff)) {
          plVar7 = (long *)FUN_0124e4c0(uVar5,1);
          if ((plVar7 != (long *)0x0) &&
             (uVar9 = (**(code **)(*plVar7 + 0x208))(), (uVar9 & 1) == 0)) {
            uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
            uVar9 = uVar8 << 2;
            uVar8 = (ulong)((int)uVar8 + 1);
            *(undefined4 *)((ulong)&local_78 | uVar9) = uVar4;
          }
          if (2 < (uVar3 & 0xff)) {
            plVar7 = (long *)FUN_0124e4c0(uVar5,2);
            if ((plVar7 != (long *)0x0) &&
               (uVar9 = (**(code **)(*plVar7 + 0x208))(), (uVar9 & 1) == 0)) {
              uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
              *(undefined4 *)((long)&local_78 + uVar8 * 4) = uVar4;
              uVar8 = (ulong)((int)uVar8 + 1);
            }
            if (3 < (uVar3 & 0xff)) {
              uVar11 = 3;
              do {
                plVar7 = (long *)FUN_0124e4c0(uVar5,uVar11);
                if ((plVar7 != (long *)0x0) &&
                   (uVar9 = (**(code **)(*plVar7 + 0x208))(), (uVar9 & 1) == 0)) {
                  uVar4 = (**(code **)(*plVar7 + 0x98))(plVar7);
                  *(undefined4 *)((long)&local_78 + (long)(int)uVar8 * 4) = uVar4;
                  uVar8 = (ulong)((int)uVar8 + 1);
                }
                uVar11 = uVar11 + 1;
              } while ((uVar11 & 0xff) < (uVar3 & 0xff));
            }
          }
        }
        uVar9 = local_78;
        iVar13 = (int)uVar8;
        if (0 < iVar13) {
          uVar5 = FUN_01243584(param_1);
          FUN_018f6cc0(uVar5,uVar9 & 0xffffffff,uVar1);
          if (iVar13 != 1) {
            uVar4 = local_78._4_4_;
            uVar5 = FUN_01243584(param_1);
            FUN_018f6cc0(uVar5,uVar4,uVar1);
            uVar9 = local_70;
            if (iVar13 != 2) {
              uVar5 = FUN_01243584(param_1);
              FUN_018f6cc0(uVar5,uVar9 & 0xffffffff,uVar1);
              if (iVar13 != 3) {
                lVar6 = uVar8 - 3;
                puVar12 = (undefined4 *)((long)&local_70 + 4);
                do {
                  uVar4 = *puVar12;
                  uVar5 = FUN_01243584(param_1);
                  FUN_018f6cc0(uVar5,uVar4,uVar1);
                  lVar6 = lVar6 + -1;
                  puVar12 = puVar12 + 1;
                } while (lVar6 != 0);
              }
            }
          }
        }
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != bVar2);
  }
  return;
}


