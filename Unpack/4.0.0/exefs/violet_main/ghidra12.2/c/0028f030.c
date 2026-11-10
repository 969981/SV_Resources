/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0028f030; name: FUN_0028f030
 */


undefined8 * FUN_0028f030(long *param_1,byte *param_2)

{
  long *plVar1;
  ulong uVar2;
  void *__src;
  undefined8 *puVar3;
  void *__dest;
  undefined8 *puVar4;
  ulong uVar5;
  undefined8 uVar6;
  undefined8 uVar7;
  undefined8 *local_58;
  long *plStack_50;
  undefined1 local_48;
  undefined8 local_38;
  
  puVar3 = (undefined8 *)FUN_002885a4(param_1,&local_38,param_2);
  puVar4 = (undefined8 *)*puVar3;
  if (puVar4 == (undefined8 *)0x0) {
    plVar1 = param_1 + 1;
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x88);
    local_48 = 0;
    local_58 = puVar4;
    plStack_50 = plVar1;
    if ((*param_2 & 1) == 0) {
      uVar7 = *(undefined8 *)(param_2 + 8);
      uVar6 = *(undefined8 *)param_2;
      puVar4[6] = *(undefined8 *)(param_2 + 0x10);
      puVar4[5] = uVar7;
      puVar4[4] = uVar6;
    }
    else {
      uVar2 = *(ulong *)(param_2 + 8);
      __src = *(void **)(param_2 + 0x10);
      if (uVar2 < 0x17) {
        __dest = (void *)((long)puVar4 + 0x21);
        *(char *)(puVar4 + 4) = (char)((int)uVar2 << 1);
      }
      else {
        if (0xffffffffffffffef < uVar2) {
                    /* WARNING: Subroutine does not return */
                    /* try { // try from 0028f188 to 0028f18b has its CatchHandler @ 0028f18c */
          std::__basic_string_common<true>::__throw_length_error();
        }
        uVar5 = uVar2 + 0x10 & 0xfffffffffffffff0;
        __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar5);
        puVar4[5] = uVar2;
        puVar4[6] = __dest;
        puVar4[4] = uVar5 | 1;
      }
      memcpy(__dest,__src,uVar2 + 1);
    }
    puVar4[10] = 0;
    puVar4[9] = 0;
    puVar4[0xc] = 0;
    puVar4[0xb] = 0;
    puVar4[0xb] = puVar4 + 0xc;
    puVar4[8] = 0;
    puVar4[7] = 0;
    puVar4[0xd] = 0;
    puVar4[0xe] = 0;
    puVar4[0xf] = 0;
    puVar4[0x10] = 0;
    local_48 = 1;
    puVar4[2] = local_38;
    *puVar4 = 0;
    puVar4[1] = 0;
    *puVar3 = puVar4;
    if (*(long *)*param_1 != 0) {
      *param_1 = *(long *)*param_1;
      puVar4 = (undefined8 *)*puVar3;
    }
    FUN_010108e0(param_1[1],puVar4);
    puVar4 = local_58;
    param_1[2] = param_1[2] + 1;
    local_58 = (undefined8 *)0x0;
    FUN_0028f1a0(&local_58);
  }
  return puVar4 + 7;
}


