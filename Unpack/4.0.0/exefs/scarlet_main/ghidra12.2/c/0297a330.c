/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0297a330; name: FUN_0297a330
 */


void FUN_0297a330(long *param_1,ulong param_2,uint param_3,uint param_4,uint param_5)

{
  undefined2 uVar1;
  undefined4 uVar2;
  uint uVar3;
  int iVar4;
  long *plVar5;
  undefined8 uVar6;
  long lVar7;
  undefined8 *puVar8;
  
  if ((param_2 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)param_1[9] + 0x80))();
    *(undefined2 *)((long)param_1 + 0x5a) = uVar1;
    uVar3 = (**(code **)(*(long *)param_1[9] + 0x70))((long *)param_1[9],0);
    *(short *)(param_1 + 0xb) =
         (short)((ulong)((uVar3 & 0xffff) * (uint)*(ushort *)((long)param_1 + 0x3f4)) / 10);
  }
  uVar2 = (**(code **)(*(long *)param_1[9] + 0xb8))();
  *(undefined4 *)((long)param_1 + 0x54) = uVar2;
  (**(code **)(*param_1 + 0x7f8))(param_1,param_4 & 1,param_3 & 1);
  if ((param_4 & 1) != 0) {
    uVar1 = (**(code **)(*(long *)param_1[9] + 0x140))();
    *(undefined2 *)((long)param_1 + 0x47e) = uVar1;
  }
  if ((param_5 & 1) != 0) {
    (**(code **)(*param_1 + 0x810))(param_1);
  }
  lVar7 = param_1[9];
  puVar8 = (undefined8 *)(lVar7 + 0x28);
  plVar5 = (long *)(**(code **)*puVar8)(puVar8);
  if (((*PTR_DAT_047dcd50 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_047dcd50), iVar4 != 0))
  {
    uVar6 = FUN_01af5520();
    *(undefined8 *)PTR_DAT_047dcd58 = uVar6;
    __cxa_guard_release(PTR_DAT_047dcd50);
  }
  do {
    if (plVar5 == (long *)0x0) {
LAB_0297a3f8:
      if ((param_5 & 1) == 0) {
        return;
      }
                    /* WARNING: Could not recover jumptable at 0x0297a414. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_1 + 0x810))(param_1);
      return;
    }
    if (plVar5 == (long *)PTR_DAT_047dcd58) {
      uVar1 = FUN_00cf41a8(*(undefined8 *)(*(long *)(lVar7 + 0x48) + 0x70));
      *(undefined2 *)(param_1 + 0xe3) = uVar1;
      goto LAB_0297a3f8;
    }
    plVar5 = (long *)*plVar5;
  } while( true );
}


