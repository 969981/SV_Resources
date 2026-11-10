/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 011b8088; name: FUN_011b8088
 */


void FUN_011b8088(long param_1,undefined1 param_2,uint param_3)

{
  undefined2 uVar1;
  int iVar2;
  long *plVar3;
  ulong uVar4;
  long lVar5;
  undefined8 uVar6;
  long lVar7;
  long lVar8;
  ulong uVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  
  uVar9 = (ulong)param_3;
  plVar3 = (long *)FUN_01021c94(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x30)
                                ,param_2);
  if (plVar3 != (long *)0x0) {
    uVar4 = (**(code **)(*plVar3 + 0x78))();
    if ((uVar4 & 1) == 0) {
      lVar5 = (**(code **)(*plVar3 + 0x1e0))(plVar3);
      (*(code *)**(undefined8 **)(lVar5 + 0x28))();
      uVar4 = FUN_011b6e8c();
      if ((uVar4 & 1) != 0) {
        plVar3 = *(long **)(param_1 + 0x48);
        uVar4 = (**(code **)(*plVar3 + 0x78))(plVar3,plVar3[8],0x3af);
        if (param_3 < *(uint *)(plVar3 + 0xb)) {
          lVar5 = uVar9 * 2 + (ulong)param_3;
          lVar7 = plVar3[8];
          *(ulong *)(plVar3[0xc] + lVar5 * 8 + 8) = uVar4 & 0xffff | 0x20000;
          lVar8 = plVar3[0xc];
          lVar5 = *(long *)(lVar8 + lVar5 * 8);
          if (*(char *)(lVar5 + 0x54) != '\0') {
            uVar1 = FUN_011b8d00(*(undefined8 *)(lVar5 + 0x30),*(undefined8 *)(lVar7 + 0x30),
                                 *(undefined2 *)(lVar5 + 0x50));
            *(undefined2 *)(lVar5 + 0x52) = uVar1;
            lVar8 = plVar3[0xc];
          }
          *(undefined2 *)(lVar8 + uVar9 * 0x18 + 0x10) = 0;
          lVar5 = plVar3[0xc] + uVar9 * 0x18;
          *(ushort *)(lVar5 + 0x12) = *(ushort *)(lVar5 + 0x12) & 0xfffe;
        }
      }
    }
    else {
      lVar5 = FUN_018d5cec(*(undefined8 *)(*(long *)(*(long *)(param_1 + 0x50) + 0x150) + 0x30),
                           param_2);
      if (lVar5 != 0) {
        lVar5 = *(long *)(lVar5 + 0x48);
        uVar10 = *(undefined8 *)(param_1 + 0x48);
        puVar11 = (undefined8 *)(lVar5 + 0x28);
        plVar3 = (long *)(**(code **)*puVar11)(puVar11);
        if (((*PTR_DAT_047dcd50 & 1) == 0) &&
           (iVar2 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar2 != 0)) {
          uVar6 = FUN_01af5520();
          *(undefined8 *)PTR_DAT_047dcd58 = uVar6;
          __cxa_guard_release(PTR_DAT_047dcd50);
        }
        do {
          if (plVar3 == (long *)0x0) {
            uVar6 = 0;
LAB_011b8128:
            FUN_014c0fb4(uVar10,uVar9,uVar6);
            return;
          }
          if (plVar3 == (long *)PTR_DAT_047dcd58) {
            uVar6 = *(undefined8 *)(lVar5 + 0x48);
            goto LAB_011b8128;
          }
          plVar3 = (long *)*plVar3;
        } while( true );
      }
    }
  }
  return;
}


