/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 006fba14; name: FUN_006fba14
 */


void FUN_006fba14(long param_1,void *param_2,ulong param_3)

{
  undefined *puVar1;
  ulong *puVar2;
  void *__dest;
  ulong uVar3;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  if (0xffffffffffffffef < param_3) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_3 < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)param_3 << 1));
    __dest = (void *)((ulong)&local_48 | 1);
    if (param_3 == 0) goto LAB_006fba90;
  }
  else {
    uVar3 = param_3 + 0x10 & 0xfffffffffffffff0;
    __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_48 = uVar3 | 1;
    local_40 = param_3;
    local_38 = __dest;
  }
  memcpy(__dest,param_2,param_3);
LAB_006fba90:
  *(undefined1 *)((long)__dest + param_3) = 0;
  puVar2 = (ulong *)(*(ulong *)(param_1 + 8) & 0xfffffffffffffffe);
  if ((*(ulong *)(param_1 + 8) & 1) != 0) {
    puVar2 = (ulong *)*puVar2;
  }
  puVar1 = *(undefined **)(param_1 + 0x20);
  if (puVar1 == PTR_DAT_047cba80) {
    FUN_001fcdc8((undefined8 *)(param_1 + 0x20),puVar2,&local_48);
  }
  else {
                    /* try { // try from 006fbab4 to 006fbacb has its CatchHandler @ 006fbb08 */
    FUN_001fcec0(puVar1,&local_48);
  }
  if ((local_48 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38);
  }
  return;
}


