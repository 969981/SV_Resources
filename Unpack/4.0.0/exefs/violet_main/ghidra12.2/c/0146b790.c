/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0146b790; name: FUN_0146b790
 */


void FUN_0146b790(long param_1,long param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  lVar7 = *(long *)(param_1 + 0x10);
  if (lVar7 != param_2) {
    lVar1 = tpidr_el0;
    do {
      *(byte **)(param_1 + 0x10) = (byte *)(lVar7 + -0x30);
      if (((*(byte *)(lVar7 + -0x18) & 1) != 0) && (lVar5 = *(long *)(lVar7 + -8), lVar5 != 0)) {
        plVar6 = *(long **)(lVar1 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,lVar5,0,8);
        }
      }
      if (((*(byte *)(lVar7 + -0x30) & 1) != 0) && (lVar7 = *(long *)(lVar7 + -0x20), lVar7 != 0)) {
        plVar6 = *(long **)(lVar1 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04859438), iVar2 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar1 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar3 & 1) == 0) || (lVar5 = FUN_00c4e600(), *(int *)(lVar5 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,lVar7,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,lVar7,0,8);
        }
      }
      lVar7 = *(long *)(param_1 + 0x10);
    } while (lVar7 != param_2);
  }
  return;
}


