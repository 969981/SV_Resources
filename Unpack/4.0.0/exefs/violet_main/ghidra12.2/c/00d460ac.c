/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00d460ac; name: FUN_00d460ac
 */


void FUN_00d460ac(long param_1,undefined8 *param_2)

{
  long lVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  undefined8 *puVar5;
  long *plVar6;
  undefined8 *puVar7;
  
  puVar7 = *(undefined8 **)(param_1 + 8);
  if (puVar7 != param_2) {
    lVar1 = tpidr_el0;
    do {
      puVar7 = puVar7 + -1;
      puVar5 = (undefined8 *)*puVar7;
      *puVar7 = 0;
      if (puVar5 != (undefined8 *)0x0) {
        FUN_00d44bc8(puVar5 + 2);
        *puVar5 = &PTR_LAB_045a0398;
        if ((long *)puVar5[1] != (long *)0x0) {
          (**(code **)(*(long *)puVar5[1] + 0x20))();
        }
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
          (**(code **)(*plVar6 + 0x18))(plVar6,puVar5,0,8);
        }
        else {
          FUN_00c48fe8(plVar6,puVar5,0,8);
        }
      }
    } while (param_2 != puVar7);
  }
  *(undefined8 **)(param_1 + 8) = param_2;
  return;
}


