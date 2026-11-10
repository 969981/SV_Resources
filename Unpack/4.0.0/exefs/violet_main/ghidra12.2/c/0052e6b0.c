/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052e6b0; name: FUN_0052e6b0
 */


bool FUN_0052e6b0(void *param_1,ulong param_2,undefined8 param_3)

{
  bool bVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined4 uVar4;
  void *pvVar5;
  ulong local_48;
  ulong local_40;
  void *local_38;
  
  if (param_1 == (void *)0x0) {
    uVar4 = 0;
    local_38 = (void *)0x0;
    uVar3 = 0;
    local_48 = 0;
    local_40 = 0;
    goto LAB_0052e754;
  }
  if (0xffffffffffffffef < param_2) {
                    /* WARNING: Subroutine does not return */
    std::__basic_string_common<true>::__throw_length_error();
  }
  if (param_2 < 0x17) {
    local_48 = CONCAT71(local_48._1_7_,(char)((int)param_2 << 1));
    pvVar5 = (void *)((ulong)&local_48 | 1);
    if (param_2 != 0) goto LAB_0052e738;
  }
  else {
    uVar3 = param_2 + 0x10 & 0xfffffffffffffff0;
    pvVar5 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar3);
    local_48 = uVar3 | 1;
    local_40 = param_2;
    local_38 = pvVar5;
LAB_0052e738:
    memcpy(pvVar5,param_1,param_2);
  }
  *(undefined1 *)((long)pvVar5 + param_2) = 0;
  uVar3 = local_48 & 0xff;
  uVar4 = (undefined4)local_40;
LAB_0052e754:
  uVar2 = (int)(uVar3 >> 1);
  pvVar5 = (void *)((ulong)&local_48 | 1);
  if ((uVar3 & 1) != 0) {
    uVar2 = uVar4;
    pvVar5 = local_38;
  }
                    /* try { // try from 0052e76c to 0052e76f has its CatchHandler @ 0052e7cc */
  uVar3 = FUN_00532960(pvVar5,uVar2);
  if ((local_48 & 1) != 0) {
    FUN_0049e790(PTR_LAB_047cba48,local_38);
  }
  bVar1 = (uVar3 & 1) == 0;
  if (bVar1) {
    FUN_00534760(param_3,"parsing",0);
  }
  return !bVar1;
}


