/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 003981f0; name: FUN_003981f0
 */


void FUN_003981f0(undefined8 param_1,byte *param_2,tm *param_3)

{
  byte *__format;
  byte *pbVar1;
  ulong uVar2;
  byte bVar3;
  size_t sVar4;
  char *local_58;
  
  bVar3 = *param_2;
  uVar2 = (ulong)(bVar3 >> 1);
  if ((bVar3 & 1) != 0) {
    uVar2 = *(ulong *)(param_2 + 8);
  }
  sVar4 = uVar2 * 2;
  local_58 = (char *)0x0;
  if (sVar4 != 0) {
    if ((uVar2 & 0x7fffffffffffffff) >> 0x3e != 0) goto LAB_00398534;
    local_58 = (char *)FUN_0049e770(PTR_FUN_047cba38,sVar4);
    memset(local_58,0,sVar4);
    bVar3 = *param_2;
  }
  __format = param_2 + 1;
  pbVar1 = __format;
  if ((bVar3 & 1) != 0) {
    pbVar1 = *(byte **)(param_2 + 0x10);
  }
                    /* try { // try from 00398288 to 003982ab has its CatchHandler @ 00398540 */
  sVar4 = strftime(local_58,sVar4,(char *)pbVar1,param_3);
  if (sVar4 != 0) {
    FUN_0021d540(param_1,local_58,sVar4);
  }
  if (local_58 != (char *)0x0) {
    FUN_0049e790(PTR_LAB_047cba48);
  }
  if (sVar4 == 0) {
    bVar3 = *param_2;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    local_58 = (char *)0x0;
    sVar4 = uVar2 * 4;
    if (sVar4 != 0) {
      if ((uVar2 & 0x3fffffffffffffff) >> 0x3d != 0) goto LAB_00398534;
      local_58 = (char *)FUN_0049e770(PTR_FUN_047cba38,sVar4);
      memset(local_58,0,sVar4);
      bVar3 = *param_2;
    }
    pbVar1 = __format;
    if ((bVar3 & 1) != 0) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
                    /* try { // try from 00398350 to 00398373 has its CatchHandler @ 00398540 */
    sVar4 = strftime(local_58,sVar4,(char *)pbVar1,param_3);
    if (sVar4 != 0) {
      FUN_0021d540(param_1,local_58,sVar4);
    }
    if (local_58 != (char *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    if (sVar4 != 0) {
      return;
    }
    bVar3 = *param_2;
    uVar2 = (ulong)(bVar3 >> 1);
    if ((bVar3 & 1) != 0) {
      uVar2 = *(ulong *)(param_2 + 8);
    }
    local_58 = (char *)0x0;
    sVar4 = uVar2 * 8;
    if (sVar4 != 0) {
      if ((uVar2 & 0x1fffffffffffffff) >> 0x3c != 0) goto LAB_00398534;
      local_58 = (char *)FUN_0049e770(PTR_FUN_047cba38,sVar4);
      memset(local_58,0,sVar4);
      bVar3 = *param_2;
    }
    pbVar1 = __format;
    if ((bVar3 & 1) != 0) {
      pbVar1 = *(byte **)(param_2 + 0x10);
    }
                    /* try { // try from 00398418 to 0039843b has its CatchHandler @ 00398540 */
    sVar4 = strftime(local_58,sVar4,(char *)pbVar1,param_3);
    if (sVar4 != 0) {
      FUN_0021d540(param_1,local_58,sVar4);
    }
    if (local_58 != (char *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
    if (sVar4 == 0) {
      bVar3 = *param_2;
      uVar2 = (ulong)(bVar3 >> 1);
      if ((bVar3 & 1) != 0) {
        uVar2 = *(ulong *)(param_2 + 8);
      }
      local_58 = (char *)0x0;
      sVar4 = uVar2 * 0x10;
      if (sVar4 != 0) {
        if ((uVar2 & 0xfffffffffffffff) >> 0x3b != 0) {
LAB_00398534:
                    /* try { // try from 00398534 to 0039853b has its CatchHandler @ 0039853c */
                    /* WARNING: Subroutine does not return */
          std::__vector_base_common<true>::__throw_length_error();
        }
        local_58 = (char *)FUN_0049e770(PTR_FUN_047cba38,sVar4);
        memset(local_58,0,sVar4);
        bVar3 = *param_2;
      }
      if ((bVar3 & 1) != 0) {
        __format = *(byte **)(param_2 + 0x10);
      }
                    /* try { // try from 003984e0 to 00398503 has its CatchHandler @ 00398540 */
      sVar4 = strftime(local_58,sVar4,(char *)__format,param_3);
      if (sVar4 != 0) {
        FUN_0021d540(param_1,local_58,sVar4);
      }
      if (local_58 != (char *)0x0) {
        FUN_0049e790(PTR_LAB_047cba48);
      }
    }
  }
  return;
}


