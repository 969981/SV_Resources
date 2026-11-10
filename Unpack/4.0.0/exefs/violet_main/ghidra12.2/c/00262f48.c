/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00262f48; name: FUN_00262f48
 */


void FUN_00262f48(ulong *param_1,ulong *param_2)

{
  void *pvVar1;
  long *plVar2;
  ulong *puVar3;
  ulong uVar4;
  ulong uVar5;
  byte *pbVar6;
  
  plVar2 = (long *)FUN_01cf7e20();
  param_1[3] = (ulong)plVar2;
  if ((*param_2 & 1) == 0) {
    uVar5 = param_2[1];
    uVar4 = *param_2;
    param_1[2] = param_2[2];
    param_1[1] = uVar5;
    *param_1 = uVar4;
  }
  else {
    uVar4 = param_2[1];
    pvVar1 = (void *)param_2[2];
    if (uVar4 < 0x17) {
      pbVar6 = (byte *)((long)param_1 + 1);
      *(byte *)param_1 = (byte)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pbVar6 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      param_1[1] = uVar4;
      param_1[2] = (ulong)pbVar6;
      *param_1 = uVar5 | 1;
    }
    memcpy(pbVar6,pvVar1,uVar4 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[7] = (ulong)plVar2;
  if ((param_2[4] & 1) == 0) {
    uVar5 = param_2[5];
    uVar4 = param_2[4];
    param_1[6] = param_2[6];
    param_1[5] = uVar5;
    param_1[4] = uVar4;
  }
  else {
    uVar4 = param_2[5];
    pvVar1 = (void *)param_2[6];
    if (uVar4 < 0x17) {
      pbVar6 = (byte *)((long)param_1 + 0x21);
      *(byte *)(param_1 + 4) = (byte)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00263280 to 00263287 has its CatchHandler @ 0026335c */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pbVar6 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      param_1[5] = uVar4;
      param_1[6] = (ulong)pbVar6;
      param_1[4] = uVar5 | 1;
    }
    memcpy(pbVar6,pvVar1,uVar4 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[0xb] = (ulong)plVar2;
  if ((param_2[8] & 1) == 0) {
    uVar5 = param_2[9];
    uVar4 = param_2[8];
    param_1[10] = param_2[10];
    param_1[9] = uVar5;
    param_1[8] = uVar4;
  }
  else {
    uVar4 = param_2[9];
    pvVar1 = (void *)param_2[10];
    if (uVar4 < 0x17) {
      pbVar6 = (byte *)((long)param_1 + 0x41);
      *(byte *)(param_1 + 8) = (byte)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00263288 to 0026328f has its CatchHandler @ 00263328 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pbVar6 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      param_1[9] = uVar4;
      param_1[10] = (ulong)pbVar6;
      param_1[8] = uVar5 | 1;
    }
    memcpy(pbVar6,pvVar1,uVar4 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[0xf] = (ulong)plVar2;
  if ((param_2[0xc] & 1) == 0) {
    uVar5 = param_2[0xd];
    uVar4 = param_2[0xc];
    param_1[0xe] = param_2[0xe];
    param_1[0xd] = uVar5;
    param_1[0xc] = uVar4;
  }
  else {
    uVar4 = param_2[0xd];
    pvVar1 = (void *)param_2[0xe];
    if (uVar4 < 0x17) {
      pbVar6 = (byte *)((long)param_1 + 0x61);
      *(byte *)(param_1 + 0xc) = (byte)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00263290 to 00263297 has its CatchHandler @ 002632f4 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pbVar6 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      param_1[0xd] = uVar4;
      param_1[0xe] = (ulong)pbVar6;
      param_1[0xc] = uVar5 | 1;
    }
    memcpy(pbVar6,pvVar1,uVar4 + 1);
  }
  plVar2 = (long *)FUN_01cf7e20();
  param_1[0x13] = (ulong)plVar2;
  if ((param_2[0x10] & 1) == 0) {
    uVar5 = param_2[0x11];
    uVar4 = param_2[0x10];
    param_1[0x12] = param_2[0x12];
    param_1[0x11] = uVar5;
    param_1[0x10] = uVar4;
  }
  else {
    uVar4 = param_2[0x11];
    pvVar1 = (void *)param_2[0x12];
    if (uVar4 < 0x17) {
      pbVar6 = (byte *)((long)param_1 + 0x81);
      *(byte *)(param_1 + 0x10) = (byte)((int)uVar4 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar4) {
                    /* try { // try from 00263298 to 0026329f has its CatchHandler @ 002632a0 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar5 = uVar4 + 0x10 & 0xfffffffffffffff0;
      pbVar6 = (byte *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      param_1[0x10] = uVar5 | 1;
      param_1[0x11] = uVar4;
      param_1[0x12] = (ulong)pbVar6;
    }
    memcpy(pbVar6,pvVar1,uVar4 + 1);
  }
  uVar4 = param_2[0x14];
  param_1[0x1a] = 0;
  *(byte *)(param_1 + 0x14) = (byte)uVar4;
  if (param_1 != param_2) {
    puVar3 = (ulong *)param_2[0x1a];
    if (puVar3 == (ulong *)0x0) {
      param_1[0x1a] = 0;
    }
    else {
      if (puVar3 == param_2 + 0x16) {
        param_1[0x1a] = (ulong)(param_1 + 0x16);
                    /* WARNING: Could not recover jumptable at 0x00263274. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (**(code **)(*(long *)param_2[0x1a] + 0x28))();
        return;
      }
      uVar4 = (**(code **)(*puVar3 + 0x38))();
      param_1[0x1a] = uVar4;
    }
  }
  return;
}


