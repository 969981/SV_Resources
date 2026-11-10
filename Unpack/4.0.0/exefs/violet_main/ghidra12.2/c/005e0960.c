/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 005e0960; name: FUN_005e0960
 */


void FUN_005e0960(long param_1,undefined8 *param_2)

{
  size_t sVar1;
  void *pvVar2;
  void *__dest;
  undefined8 uVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  char *__s;
  ulong uVar7;
  long *plVar8;
  long local_100;
  undefined1 auStack_f8 [32];
  ulong local_d8;
  size_t sStack_d0;
  void *local_c8;
  ulong local_c0;
  ulong uStack_b8;
  void *local_b0;
  undefined1 auStack_a8 [32];
  ulong *local_88;
  undefined8 *local_80 [3];
  char local_68;
  
                    /* try { // try from 005e0984 to 005e0987 has its CatchHandler @ 005e0c00 */
  FUN_00610674();
  if ((long *)*param_2 != param_2 + 1) {
    plVar8 = (long *)*param_2;
    do {
      if ((*(byte *)(plVar8 + 4) & 1) == 0) {
        __s = (char *)((long)plVar8 + 0x21);
      }
      else {
        __s = (char *)plVar8[6];
      }
      sVar1 = strlen(__s);
      if (0xffffffffffffffef < sVar1) {
                    /* try { // try from 005e0bd4 to 005e0bdb has its CatchHandler @ 005e0bfc */
                    /* WARNING: Subroutine does not return */
        std::__basic_string_common<true>::__throw_length_error();
      }
      if (sVar1 < 0x17) {
        local_d8 = CONCAT71(local_d8._1_7_,(char)((int)sVar1 << 1));
        pvVar2 = (void *)((ulong)&local_d8 | 1);
        if (sVar1 != 0) goto LAB_005e0a38;
      }
      else {
        uVar7 = sVar1 + 0x10 & 0xfffffffffffffff0;
        pvVar2 = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
        local_d8 = uVar7 | 1;
        sStack_d0 = sVar1;
        local_c8 = pvVar2;
LAB_005e0a38:
        memcpy(pvVar2,__s,sVar1);
      }
      *(undefined1 *)((long)pvVar2 + sVar1) = 0;
      local_100 = plVar8[8] * 1000000;
      FUN_0025da80(auStack_f8,&local_100);
      pvVar2 = local_c8;
      sVar1 = sStack_d0;
      if ((local_d8 & 1) == 0) {
        local_b0 = local_c8;
        uStack_b8 = sStack_d0;
        local_c0 = local_d8;
      }
      else {
        if (sStack_d0 < 0x17) {
          local_c0 = CONCAT71(local_c0._1_7_,(char)((int)sStack_d0 << 1));
          __dest = (void *)((ulong)&local_c0 | 1);
        }
        else {
          if (0xffffffffffffffef < sStack_d0) {
                    /* try { // try from 005e0bdc to 005e0be3 has its CatchHandler @ 005e0be4 */
                    /* WARNING: Subroutine does not return */
            std::__basic_string_common<true>::__throw_length_error();
          }
          uVar7 = sStack_d0 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)FUN_0049e770(PTR_FUN_047cba38,uVar7);
          local_c0 = uVar7 | 1;
          uStack_b8 = sVar1;
          local_b0 = __dest;
        }
        memcpy(__dest,pvVar2,sVar1 + 1);
      }
                    /* try { // try from 005e0ad4 to 005e0adf has its CatchHandler @ 005e0c04 */
      FUN_004eb024(auStack_a8,auStack_f8);
                    /* try { // try from 005e0ae8 to 005e0b07 has its CatchHandler @ 005e0c0c */
      local_88 = &local_c0;
      FUN_005e1390(local_80,*(undefined8 *)(param_1 + 0x20),&local_88);
      if (local_68 != '\0') {
        uVar3 = FUN_005e1514(param_1 + 0x10,&local_c0);
        *local_80[0] = uVar3;
        local_80[0][1] = uVar3;
      }
      FUN_004eb088(auStack_a8);
      if ((local_c0 & 1) == 0) {
        FUN_004eb088(auStack_f8);
        if ((local_d8 & 1) == 0) goto LAB_005e0b30;
LAB_005e0b5c:
        FUN_0049e790(PTR_LAB_047cba48,local_c8);
        plVar4 = (long *)plVar8[1];
        if ((long *)plVar8[1] != (long *)0x0) goto LAB_005e0b74;
LAB_005e0b84:
        plVar4 = plVar8 + 2;
        plVar5 = (long *)*plVar4;
        if ((long *)*plVar5 != plVar8) {
          do {
            lVar6 = *plVar4;
            plVar4 = (long *)(lVar6 + 0x10);
            plVar5 = (long *)*plVar4;
          } while (*plVar5 != lVar6);
        }
      }
      else {
        FUN_0049e790(PTR_LAB_047cba48,local_b0);
        FUN_004eb088(auStack_f8);
        if ((local_d8 & 1) != 0) goto LAB_005e0b5c;
LAB_005e0b30:
        plVar4 = (long *)plVar8[1];
        if ((long *)plVar8[1] == (long *)0x0) goto LAB_005e0b84;
LAB_005e0b74:
        do {
          plVar5 = plVar4;
          plVar4 = (long *)*plVar5;
        } while ((long *)*plVar5 != (long *)0x0);
      }
      plVar8 = plVar5;
    } while (plVar5 != param_2 + 1);
  }
  return;
}


