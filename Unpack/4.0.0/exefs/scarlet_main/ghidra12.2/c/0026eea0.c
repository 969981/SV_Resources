/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0026eea0; name: FUN_0026eea0
 */


void FUN_0026eea0(long param_1,long param_2)

{
  undefined *puVar1;
  long *plVar2;
  size_t __n;
  void *__dest;
  long lVar3;
  byte *pbVar4;
  ulong uVar5;
  long *local_b0;
  size_t sStack_a8;
  void *local_a0;
  long *local_90;
  size_t sStack_88;
  void *local_80;
  long *local_78;
  long *local_70;
  size_t sStack_68;
  void *local_60;
  
  puVar1 = PTR_LAB_047cba48;
  if (*(long *)(param_2 + 0x18) == 0) {
    return;
  }
  sStack_68 = *(size_t *)(param_1 + 0x20);
  local_60 = *(void **)(sStack_68 + 0x18);
  if (*(void **)(sStack_68 + 8) <= local_60) {
    return;
  }
  while (local_70 = *(long **)(*(long *)(sStack_68 + 0x20) + (long)local_60 * 8),
        local_70 == (long *)0x0) {
    local_60 = (void *)((long)local_60 + 1);
    if (*(void **)(sStack_68 + 8) == local_60) {
      return;
    }
  }
  if (local_70 == *(long **)(*(long *)(sStack_68 + 0x20) + ((ulong)local_60 ^ 1) * 8)) {
    local_70 = *(long **)(*local_70 + 0x20);
  }
  if (local_70 == (long *)0x0) {
    return;
  }
  do {
    pbVar4 = (byte *)local_70[1];
    if ((*pbVar4 & 1) == 0) {
      pbVar4 = pbVar4 + 1;
    }
    else {
      pbVar4 = *(byte **)(pbVar4 + 0x10);
    }
    plVar2 = (long *)FUN_01cf7e20();
    local_78 = plVar2;
    __n = strlen((char *)pbVar4);
    if (0xffffffffffffffef < __n) {
                    /* try { // try from 0026f110 to 0026f117 has its CatchHandler @ 0026f118 */
                    /* WARNING: Subroutine does not return */
      std::__basic_string_common<true>::__throw_length_error();
    }
    if (__n < 0x17) {
      local_90 = (long *)CONCAT71(local_90._1_7_,(char)((int)__n << 1));
      __dest = (void *)((ulong)&local_90 | 1);
      if (__n != 0) goto LAB_0026efe8;
    }
    else {
      uVar5 = __n + 0x10 & 0xfffffffffffffff0;
      __dest = (void *)(**(code **)(*plVar2 + 0x10))(plVar2,uVar5,1);
      local_90 = (long *)(uVar5 | 1);
      sStack_88 = __n;
      local_80 = __dest;
LAB_0026efe8:
      memcpy(__dest,pbVar4,__n);
    }
    *(undefined1 *)((long)__dest + __n) = 0;
                    /* try { // try from 0026effc to 0026f007 has its CatchHandler @ 0026f128 */
    lVar3 = FUN_0026f508(param_2,&local_90);
    if (((ulong)local_90 & 1) != 0) {
      (**(code **)(*local_78 + 0x18))(local_78,local_80,(ulong)local_90 & 0xfffffffffffffffe,1);
    }
    if (param_2 + 8 == lVar3) {
      local_a0 = local_60;
      sStack_a8 = sStack_68;
      local_b0 = local_70;
      pbVar4 = (byte *)local_70[1];
      local_80 = local_60;
      sStack_88 = sStack_68;
      local_90 = local_70;
                    /* try { // try from 0026f07c to 0026f08f has its CatchHandler @ 0026f120 */
      FUN_002597f8(&local_b0);
      FUN_0025a790(*(undefined8 *)(param_1 + 0x20),&local_90);
      if ((pbVar4 != (byte *)0x0) && (*(long *)(param_1 + 0x10) == 0)) {
        FUN_00267ec4(pbVar4 + 0x18);
        if ((*pbVar4 & 1) != 0) {
          FUN_0049e790(puVar1,*(undefined8 *)(pbVar4 + 0x10));
        }
        FUN_0049e790(puVar1,pbVar4);
      }
      sStack_68 = sStack_a8;
      local_60 = local_a0;
      local_70 = local_b0;
    }
    else {
      if (*(int *)(local_70[1] + 0x34) == 10) {
        FUN_0026eea0(*(undefined8 *)(local_70[1] + 0x28),lVar3 + 0x40);
      }
                    /* try { // try from 0026ef54 to 0026ef5b has its CatchHandler @ 0026f11c */
      FUN_002597f8(&local_70);
    }
    if (local_70 == (long *)0x0) {
      return;
    }
  } while( true );
}


