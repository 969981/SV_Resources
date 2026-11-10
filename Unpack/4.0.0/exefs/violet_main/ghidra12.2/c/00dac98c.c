/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00dac98c; name: FUN_00dac98c
 */


void FUN_00dac98c(long param_1,long param_2,undefined8 param_3,long param_4,long param_5)

{
  int iVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  undefined8 uVar5;
  undefined8 uVar6;
  
  FUN_00dae5f0(param_1 + 0x38);
  plVar4 = *(long **)(param_1 + 0x10);
  if (((plVar4 == (long *)0x0) || (*plVar4 != *(long *)(param_4 + 0x158))) ||
     (plVar4[0xe] != *(long *)(param_5 + 0x158))) {
    plVar4 = *(long **)(param_1 + 0x30);
    lVar2 = (**(code **)(*plVar4 + 0x10))(plVar4,0xe0,8);
    if (lVar2 == 0) {
      plVar4 = (long *)0x0;
      uVar6 = 0;
      uVar5 = 0;
    }
    else {
      if (((DAT_04865a38 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04865a38), iVar1 != 0)) {
        FUN_010538c0(&DAT_04865a30,&LAB_028bf190);
        FUN_00100190(PTR_LAB_047d3900,&DAT_04865a30,&PTR_LOOP_04483000);
        __cxa_guard_release(&DAT_04865a38);
      }
      lVar3 = nn::os::GetTlsValue(DAT_04865a30);
      if (0xf < *(ulong *)(lVar3 + 0x80)) {
                    /* WARNING: Subroutine does not return */
        abort();
      }
      *(long **)(lVar3 + *(ulong *)(lVar3 + 0x80) * 8) = plVar4;
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + 1;
      FUN_00dacb38(lVar2,*(undefined8 *)(param_4 + 0x158));
      FUN_00dacb38(lVar2 + 0x70,*(undefined8 *)(param_5 + 0x158));
      *(long *)(lVar3 + 0x80) = *(long *)(lVar3 + 0x80) + -1;
      uVar5 = 8;
      uVar6 = 0xe0;
    }
    lVar3 = *(long *)(param_1 + 0x10);
    *(long *)(param_1 + 0x10) = lVar2;
    if (lVar3 != 0) {
      FUN_00e94f7c(param_1 + 0x18);
    }
    *(long **)(param_1 + 0x18) = plVar4;
    *(undefined8 *)(param_1 + 0x20) = uVar6;
    *(undefined8 *)(param_1 + 0x28) = uVar5;
  }
  *(undefined1 *)(param_1 + 0x71) = 0;
  FUN_00daecec(param_1,*(undefined4 *)(param_2 + 0x194),param_2,param_3,param_4 + 0x158,
               param_5 + 0x158);
  return;
}


