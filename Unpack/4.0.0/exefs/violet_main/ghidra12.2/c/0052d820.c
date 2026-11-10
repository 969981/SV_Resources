/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0052d820; name: FUN_0052d820
 */


void FUN_0052d820(undefined8 param_1,undefined8 param_2)

{
  ulong uVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  void *__src;
  size_t __n;
  long lVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_047cdc68;
  if (((*PTR_DAT_047cdc60 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_047cdc60), iVar3 != 0))
  {
    puVar4 = (undefined8 *)FUN_0049e770(PTR_FUN_047cba38,0x38);
    if (puVar4 != (undefined8 *)0x0) {
      puVar4[6] = 0;
      puVar4[1] = 0;
      *puVar4 = 0;
      puVar4[3] = 0;
      puVar4[2] = 0;
      *(undefined2 *)(puVar4 + 3) = 1;
      *(undefined1 *)((long)puVar4 + 0x1a) = 0;
      puVar4[5] = 0;
      puVar4[4] = 0;
    }
    *(undefined8 **)puVar2 = puVar4;
    __cxa_guard_release(PTR_DAT_047cdc60);
  }
  plVar7 = *(long **)puVar2;
  std::mutex::lock();
  puVar4 = (undefined8 *)plVar7[1];
  if (puVar4 < (undefined8 *)plVar7[2]) {
    *puVar4 = param_1;
    puVar4[1] = param_2;
    plVar7[1] = (long)(puVar4 + 2);
  }
  else {
    lVar8 = (long)puVar4 - *plVar7 >> 4;
    uVar1 = lVar8 + 1;
    if (uVar1 >> 0x3c != 0) {
                    /* try { // try from 0052d984 to 0052d98b has its CatchHandler @ 0052d98c */
                    /* WARNING: Subroutine does not return */
      std::__vector_base_common<true>::__throw_length_error();
    }
    lVar5 = plVar7[2] - *plVar7;
    uVar6 = lVar5 >> 3;
    if (uVar1 <= uVar6) {
      uVar1 = uVar6;
    }
    if (0x7fffffffffffffe < (ulong)(lVar5 >> 4)) {
      uVar1 = 0xfffffffffffffff;
    }
    if (uVar1 == 0) {
      lVar5 = 0;
    }
    else {
      lVar5 = FUN_0049e770(PTR_FUN_047cba38,uVar1 << 4);
    }
    puVar4 = (undefined8 *)(lVar5 + lVar8 * 0x10);
    *puVar4 = param_1;
    puVar4[1] = param_2;
    __src = (void *)*plVar7;
    __n = plVar7[1] - (long)__src;
    if (0 < (long)__n) {
      memcpy((void *)((long)puVar4 - __n),__src,__n);
      __src = (void *)*plVar7;
    }
    *plVar7 = (long)((long)puVar4 - __n);
    plVar7[1] = (long)(puVar4 + 2);
    plVar7[2] = lVar5 + uVar1 * 0x10;
    if (__src != (void *)0x0) {
      FUN_0049e790(PTR_LAB_047cba48);
    }
  }
  std::mutex::unlock();
  return;
}


