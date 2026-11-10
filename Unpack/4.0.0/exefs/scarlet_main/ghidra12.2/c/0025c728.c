/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 0025c728; name: FUN_0025c728
 */


undefined8 FUN_0025c728(long *param_1,int *param_2)

{
  long *plVar1;
  size_t sVar2;
  void *__dest;
  undefined8 *puVar3;
  undefined8 uVar4;
  long *plVar5;
  long lVar6;
  char *__s;
  char *__s_00;
  undefined8 *puVar7;
  ulong uVar8;
  long *plVar9;
  ulong local_78;
  size_t sStack_70;
  void *local_68;
  long *plStack_60;
  undefined8 local_58;
  
  if (*param_2 == 5) {
    if (*(long **)(param_2 + 8) != (long *)(param_2 + 10)) {
      plVar9 = *(long **)(param_2 + 8);
      do {
        if ((*(byte *)(plVar9 + 8) & 1) == 0) {
          __s = (char *)((long)plVar9 + 0x41);
          if ((*(byte *)(plVar9 + 4) & 1) != 0) goto LAB_0025c794;
LAB_0025c7a8:
          __s_00 = (char *)((long)plVar9 + 0x21);
        }
        else {
          __s = (char *)plVar9[10];
          if ((*(byte *)(plVar9 + 4) & 1) == 0) goto LAB_0025c7a8;
LAB_0025c794:
          __s_00 = (char *)plVar9[6];
        }
        plVar1 = (long *)FUN_01cf7e20();
        plStack_60 = plVar1;
        sVar2 = strlen(__s_00);
        if (0xffffffffffffffef < sVar2) {
                    /* try { // try from 0025c974 to 0025c97b has its CatchHandler @ 0025c97c */
                    /* WARNING: Subroutine does not return */
          std::__basic_string_common<true>::__throw_length_error();
        }
        if (sVar2 < 0x17) {
          local_78 = CONCAT71(local_78._1_7_,(char)((int)sVar2 << 1));
          __dest = (void *)((ulong)&local_78 | 1);
          if (sVar2 != 0) goto LAB_0025c818;
        }
        else {
          uVar8 = sVar2 + 0x10 & 0xfffffffffffffff0;
          __dest = (void *)(**(code **)(*plVar1 + 0x10))(plVar1,uVar8,1);
          local_78 = uVar8 | 1;
          sStack_70 = sVar2;
          local_68 = __dest;
LAB_0025c818:
          memcpy(__dest,__s_00,sVar2);
        }
        *(undefined1 *)((long)__dest + sVar2) = 0;
                    /* try { // try from 0025c82c to 0025c83b has its CatchHandler @ 0025c980 */
        puVar3 = (undefined8 *)FUN_01d0232c(param_1,&local_58,&local_78);
        puVar7 = (undefined8 *)*puVar3;
        if (puVar7 == (undefined8 *)0x0) {
          puVar7 = (undefined8 *)
                   (**(code **)(*(long *)param_1[2] + 0x10))((long *)param_1[2],0x60,8);
          puVar7[5] = sStack_70;
          puVar7[4] = local_78;
          puVar7[7] = plStack_60;
          puVar7[6] = local_68;
          local_78 = 0;
          sStack_70 = 0;
          local_68 = (void *)0x0;
          uVar4 = FUN_01cf7e20();
          puVar7[10] = 0;
          puVar7[0xb] = uVar4;
          puVar7[8] = 0;
          puVar7[9] = 0;
          puVar7[2] = local_58;
          *puVar7 = 0;
          puVar7[1] = 0;
          *puVar3 = puVar7;
          if (*(long *)*param_1 == 0) {
            puVar3 = puVar7;
          }
          else {
            *param_1 = *(long *)*param_1;
            puVar3 = (undefined8 *)*puVar3;
          }
          FUN_010108e0(param_1[1],puVar3);
          param_1[3] = param_1[3] + 1;
        }
        sVar2 = strlen(__s);
                    /* try { // try from 0025c8d4 to 0025c8db has its CatchHandler @ 0025c980 */
        FUN_01f77cc0(puVar7 + 8,__s,sVar2);
        if ((local_78 & 1) != 0) {
          (**(code **)(*plStack_60 + 0x18))(plStack_60,local_68,local_78 & 0xfffffffffffffffe,1);
        }
        plVar1 = (long *)plVar9[1];
        if ((long *)plVar9[1] == (long *)0x0) {
          plVar1 = plVar9 + 2;
          plVar5 = (long *)*plVar1;
          if ((long *)*plVar5 != plVar9) {
            do {
              lVar6 = *plVar1;
              plVar1 = (long *)(lVar6 + 0x10);
              plVar5 = (long *)*plVar1;
            } while (*plVar5 != lVar6);
          }
        }
        else {
          do {
            plVar5 = plVar1;
            plVar1 = (long *)*plVar5;
          } while ((long *)*plVar5 != (long *)0x0);
        }
        plVar9 = plVar5;
      } while (plVar5 != (long *)(param_2 + 10));
    }
    uVar4 = 0;
  }
  else {
    uVar4 = 0x80341;
  }
  return uVar4;
}


