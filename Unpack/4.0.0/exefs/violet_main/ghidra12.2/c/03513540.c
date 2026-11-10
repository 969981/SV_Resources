/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03513540; name: FUN_03513540
 */


undefined4 FUN_03513540(undefined1 *param_1)

{
  long lVar1;
  undefined *puVar2;
  void *pvVar3;
  int iVar4;
  undefined4 uVar5;
  long *plVar6;
  ulong uVar7;
  
  *param_1 = 0;
  puVar2 = PTR_DAT_047e6c18;
  uVar7 = *(ulong *)(PTR_DAT_047e6c18 + 8);
  lVar1 = tpidr_el0;
  plVar6 = *(long **)(lVar1 + 0x30);
  if (plVar6 == (long *)0x0) {
    if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0)) {
      DAT_04859430 = DAT_04859418;
      __cxa_guard_release(&DAT_04859438);
    }
    plVar6 = DAT_04859430;
    *(long **)(lVar1 + 0x30) = DAT_04859430;
  }
  DAT_048b0c80 = (void *)(**(code **)(*plVar6 + 0x10))(plVar6,uVar7,0x1000);
  if (DAT_048b0c80 != (void *)0x0) {
    DAT_048b0c90 = (undefined4)uVar7;
    iVar4 = nn::os::CreateThread
                      ((ThreadType *)&DAT_048b0ac0,FUN_0351348c,param_1,DAT_048b0c80,
                       uVar7 & 0xffffffff,*(int *)puVar2);
    pvVar3 = DAT_048b0c80;
    if (iVar4 == 0) {
      nn::os::SetThreadName((ThreadType *)&DAT_048b0ac0,"AK::EventManager");
      nn::os::SetThreadCoreMask
                ((ThreadType *)&DAT_048b0ac0,*(int *)(puVar2 + 0x10),*(ulong *)(puVar2 + 0x18));
      nn::os::StartThread((ThreadType *)&DAT_048b0ac0);
    }
    else {
      if ((DAT_048b0c88 != 0) && (DAT_048b0c80 != (void *)0x0)) {
        plVar6 = *(long **)(lVar1 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04859438), iVar4 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar7 = FUN_00c4e564(plVar6);
        if ((uVar7 & 1) == 0) {
          (**(code **)(*plVar6 + 0x18))(plVar6,pvVar3,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,pvVar3,0,8);
        }
      }
      DAT_048b0c80 = (void *)0x0;
    }
  }
  uVar5 = 1;
  if (DAT_048b0b00 == '\0') {
    uVar5 = 2;
  }
  return uVar5;
}


