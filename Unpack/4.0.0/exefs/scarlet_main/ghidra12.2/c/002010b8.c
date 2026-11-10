/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 002010b8; name: FUN_002010b8
 */


void FUN_002010b8(undefined4 *param_1,undefined4 *param_2,undefined8 param_3)

{
  ulong uVar1;
  void *__src;
  long *plVar2;
  void *__dest;
  ulong uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  undefined8 *local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  long local_68;
  undefined8 *local_60;
  undefined8 local_58;
  undefined8 local_50;
  undefined8 uStack_48;
  
  *param_1 = *param_2;
  plVar2 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 8) = plVar2;
  if ((*(byte *)(param_2 + 2) & 1) == 0) {
    uVar5 = *(undefined8 *)(param_2 + 4);
    uVar4 = *(undefined8 *)(param_2 + 2);
    *(undefined8 *)(param_1 + 6) = *(undefined8 *)(param_2 + 6);
    *(undefined8 *)(param_1 + 4) = uVar5;
    *(undefined8 *)(param_1 + 2) = uVar4;
  }
  else {
    uVar1 = *(ulong *)(param_2 + 4);
    __src = *(void **)(param_2 + 6);
    if (uVar1 < 0x17) {
      __dest = (void *)((long)param_1 + 9);
      *(char *)(param_1 + 2) = (char)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00201220 to 00201227 has its CatchHandler @ 00201228 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar3 = uVar1 + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar3,1);
      *(ulong *)(param_1 + 4) = uVar1;
      *(void **)(param_1 + 6) = __dest;
      *(ulong *)(param_1 + 2) = uVar3 | 1;
    }
    memcpy(__dest,__src,uVar1 + 1);
  }
  local_58 = 0;
  local_50 = FUN_01cf7e20();
  uStack_48 = 0;
                    /* try { // try from 00201180 to 0020118f has its CatchHandler @ 00201244 */
  local_60 = &local_58;
  FUN_01e76990(&local_80,param_2 + 10,&local_60);
  FUN_01cfa44c(&local_60,local_58);
  *(undefined1 *)(param_1 + 10) = 0;
  *(undefined8 **)(param_1 + 0xc) = local_80;
  *(undefined8 *)(param_1 + 0x10) = uStack_70;
  *(undefined8 *)(param_1 + 0xe) = local_78;
  plVar2 = (long *)(param_1 + 0xe);
  *(long *)(param_1 + 0x12) = local_68;
  if (local_68 == 0) {
    *(long **)(param_1 + 0xc) = plVar2;
  }
  else {
    *(long **)(*plVar2 + 0x10) = plVar2;
    local_68 = 0;
    local_80 = &local_78;
    local_78 = 0;
  }
  *(undefined1 *)(param_1 + 10) = 1;
  FUN_01cfa44c(&local_80,local_78);
                    /* try { // try from 00201200 to 00201207 has its CatchHandler @ 0020122c */
  FUN_00200584(param_1 + 0x14,param_3);
  return;
}


