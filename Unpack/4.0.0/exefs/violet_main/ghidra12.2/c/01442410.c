/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01442410; name: FUN_01442410
 */


void FUN_01442410(long param_1)

{
  long lVar1;
  long *plVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  long *local_68;
  undefined8 local_60;
  char *pcStack_58;
  undefined8 local_50;
  long *local_48;
  
  plVar2 = *(long **)(param_1 + 0x6cd0);
  if (plVar2 != (long *)0x0) {
    (**(code **)(*plVar2 + 0x58))(plVar2);
  }
  local_60 = 0xf1734e100977352b;
  pcStack_58 = "L_cursor_00";
  local_50 = 0xb;
  local_48 = (long *)0x0;
  if (plVar2 != (long *)0x0) {
    lVar1 = FUN_00c8c7b4(plVar2[0x2e],&local_60);
    (**(code **)(*plVar2 + 0x60))(plVar2);
    if (lVar1 != 0) {
      fVar3 = *(float *)(lVar1 + 0x30);
      fVar4 = *(float *)(lVar1 + 0x34);
      uVar5 = *(undefined4 *)(lVar1 + 0x38);
      if ((fVar3 != *(float *)(param_1 + 0x6b90)) || (fVar4 != *(float *)(param_1 + 0x6b94))) {
        local_68 = *(long **)(param_1 + 0x6cd0);
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x58))();
        }
        local_60 = 0x436816bd92bcbbee;
        pcStack_58 = "N_cursor_pokebox_00";
        local_50 = 0x13;
        local_48 = (long *)0x0;
        FUN_01442568(fVar3,fVar4,uVar5,&local_68,&local_60);
        if (local_48 != (long *)0x0) {
          (**(code **)(*local_48 + 0x20))();
        }
        if (local_68 != (long *)0x0) {
          (**(code **)(*local_68 + 0x60))();
        }
        *(float *)(param_1 + 0x6b90) = fVar3;
        *(float *)(param_1 + 0x6b94) = fVar4;
        *(undefined4 *)(param_1 + 0x6b98) = uVar5;
      }
    }
  }
  return;
}


