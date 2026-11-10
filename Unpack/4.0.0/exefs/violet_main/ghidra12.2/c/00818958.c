/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00818958; name: FUN_00818958
 */


void FUN_00818958(ulong *param_1,ulong *param_2)

{
  ulong *puVar1;
  undefined1 *__dest;
  void *__src;
  ulong uVar2;
  ulong uVar3;
  byte local_68 [16];
  undefined8 local_58;
  ulong local_50;
  ulong uStack_48;
  ulong local_40;
  
  if ((byte)param_2[8] == 0) {
    if (((byte)*param_2 & 1) == 0) {
      if (1 < (byte)*param_2) {
        uVar2 = param_2[1];
        uVar3 = *param_2;
        param_1[2] = param_2[2];
        param_1[1] = uVar2;
        *param_1 = uVar3;
        return;
      }
    }
    else {
      uVar3 = param_2[1];
      if (uVar3 != 0) {
        __src = (void *)param_2[2];
        if (uVar3 < 0x17) {
          __dest = (undefined1 *)((long)param_1 + 1);
          *(char *)param_1 = (char)((int)uVar3 << 1);
        }
        else {
          if (0xffffffffffffffef < uVar3) {
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar2 = uVar3 + 0x10 & 0xfffffffffffffff0;
          __dest = (undefined1 *)FUN_0049e770(PTR_FUN_047cba38,uVar2);
          param_1[1] = uVar3;
          param_1[2] = (ulong)__dest;
          *param_1 = uVar2 | 1;
        }
        memcpy(__dest,__src,uVar3 + 1);
        return;
      }
    }
  }
  if ((int)param_2[4] != 0x1c) {
    FUN_00818c78(param_1,param_2 + 3);
    return;
  }
  FUN_00818c78(local_68,param_2 + 3);
                    /* try { // try from 00818990 to 008189a7 has its CatchHandler @ 00818b20 */
  puVar1 = (ulong *)FUN_00273ff4(local_68,0,&DAT_03be62d9,1);
  uStack_48 = puVar1[1];
  local_50 = *puVar1;
  local_40 = puVar1[2];
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
                    /* try { // try from 008189c0 to 008189d3 has its CatchHandler @ 00818ae8 */
  puVar1 = (ulong *)FUN_0021d540(&local_50,&DAT_03c246fd,1);
  uVar2 = puVar1[1];
  uVar3 = *puVar1;
  param_1[2] = puVar1[2];
  param_1[1] = uVar2;
  *param_1 = uVar3;
  puVar1[1] = 0;
  puVar1[2] = 0;
  *puVar1 = 0;
  if ((local_50 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_40);
  }
  if ((local_68[0] & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_58);
  }
  return;
}


