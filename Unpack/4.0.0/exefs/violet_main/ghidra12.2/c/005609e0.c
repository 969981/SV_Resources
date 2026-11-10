/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005609e0; name: FUN_005609e0
 */


void FUN_005609e0(byte *param_1,undefined8 param_2)

{
  ulong uVar1;
  void *__src;
  byte bVar2;
  undefined4 uVar3;
  byte *pbVar4;
  long *plVar5;
  ulong uVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  
  bVar2 = FUN_01f704f0(param_2);
  *param_1 = bVar2 & 1;
  FUN_01f70538(param_1 + 8,param_2,&DAT_03c825d5);
  pbVar4 = (byte *)FUN_01f70598(param_2);
  plVar5 = (long *)FUN_01cf7e20();
  *(long **)(param_1 + 0x40) = plVar5;
  if ((*pbVar4 & 1) == 0) {
    uVar8 = *(undefined8 *)(pbVar4 + 8);
    uVar7 = *(undefined8 *)pbVar4;
    *(undefined8 *)(param_1 + 0x38) = *(undefined8 *)(pbVar4 + 0x10);
    *(undefined8 *)(param_1 + 0x30) = uVar8;
    *(undefined8 *)(param_1 + 0x28) = uVar7;
  }
  else {
    uVar1 = *(ulong *)(pbVar4 + 8);
    __src = *(void **)(pbVar4 + 0x10);
    if (uVar1 < 0x17) {
      pbVar4 = param_1 + 0x29;
      param_1[0x28] = (byte)((int)uVar1 << 1);
    }
    else {
      if (0xffffffffffffffef < uVar1) {
                    /* try { // try from 00560b10 to 00560b17 has its CatchHandler @ 00560b18 */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      uVar6 = uVar1 + 0x10 & 0xfffffffffffffff0;
      pbVar4 = (byte *)(**(code **)(*plVar5 + 0x10))(plVar5,uVar6,1);
      *(ulong *)(param_1 + 0x30) = uVar1;
      *(byte **)(param_1 + 0x38) = pbVar4;
      *(ulong *)(param_1 + 0x28) = uVar6 | 1;
    }
    memcpy(pbVar4,__src,uVar1 + 1);
  }
                    /* try { // try from 00560aac to 00560ae3 has its CatchHandler @ 00560b20 */
  uVar3 = FUN_01f7057c(param_2,"ussid");
  *(undefined4 *)(param_1 + 0x48) = uVar3;
  uVar3 = FUN_01f7057c(param_2,"ucsid");
  *(undefined4 *)(param_1 + 0x4c) = uVar3;
  uVar3 = FUN_01f7057c(param_2,"upcsid");
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  FUN_01f70538(param_1 + 0x58,param_2,&DAT_03c2630a);
  return;
}


