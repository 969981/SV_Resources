/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00e23cf0; name: FUN_00e23cf0
 */


long * FUN_00e23cf0(long *param_1,long param_2,long param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  byte local_78 [16];
  ulong local_68;
  
  if (param_1 == (long *)0x0) {
    return (long *)0x0;
  }
  lVar2 = *(long *)(param_5 + 0x18) - (param_4 - param_2);
  lVar5 = param_3 - param_2;
  if (lVar2 == 0 || *(long *)(param_5 + 0x18) < param_4 - param_2) {
    lVar2 = 0;
  }
  if ((lVar5 < 1) || (lVar4 = (**(code **)(*param_1 + 0x60))(param_1,param_2,lVar5), lVar4 == lVar5)
     ) {
    if (0 < lVar2) {
      std::string::__init((ulong)local_78,(char)lVar2);
      uVar3 = (ulong)local_78 | 1;
      if ((local_78[0] & 1) != 0) {
        uVar3 = local_68;
      }
      lVar5 = (**(code **)(*param_1 + 0x60))(param_1,uVar3,lVar2);
      if (((local_78[0] & 1) != 0) && (local_68 != 0)) {
        lVar4 = tpidr_el0;
        plVar6 = *(long **)(lVar4 + 0x30);
        if (plVar6 == (long *)0x0) {
          if (((DAT_04859438 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04859438), iVar1 != 0))
          {
            DAT_04859430 = DAT_04859418;
            __cxa_guard_release(&DAT_04859438);
          }
          plVar6 = DAT_04859430;
          *(long **)(lVar4 + 0x30) = DAT_04859430;
        }
        uVar3 = (**(code **)(*plVar6 + 0xf8))(plVar6);
        if (((uVar3 & 1) == 0) || (lVar4 = FUN_00c4e600(), *(int *)(lVar4 + 0x12c8) < 1)) {
          (**(code **)(*plVar6 + 0x18))(plVar6,local_68,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,local_68,0,8);
        }
      }
      if (lVar5 != lVar2) {
        return (long *)0x0;
      }
    }
    param_4 = param_4 - param_3;
    if ((param_4 < 1) ||
       (lVar2 = (**(code **)(*param_1 + 0x60))(param_1,param_3,param_4), lVar2 == param_4)) {
      *(undefined8 *)(param_5 + 0x18) = 0;
      return param_1;
    }
  }
  return (long *)0x0;
}


