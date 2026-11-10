/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 53776abb60a9d316b7b5365e0091cb7c971e62ffbf493e4541184f0d955aa79f
 * Ghidra function entry: 03127434; name: FUN_03127434
 */


void FUN_03127434(long *param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  void *__src;
  void *__dest;
  undefined *puVar2;
  long lVar3;
  undefined4 *puVar4;
  int iVar5;
  uint *puVar6;
  int iVar7;
  long lVar8;
  long lVar9;
  
  if (0x7ffffffe < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_032270d0(0x4648a379,"../..\\Common/Base/Container/Array/hkArray.inl",0x5e,
                 "Invalid requestedCapacity");
  }
  lVar3 = (**(code **)(*param_2 + 0x18))(param_2,param_3 * 0x120);
  iVar5 = (int)param_1[1];
  if (0 < iVar5) {
    lVar9 = *param_1;
    lVar8 = 0;
    iVar7 = iVar5;
    do {
      __src = (void *)(lVar9 + lVar8);
      __dest = (void *)(lVar3 + lVar8);
      memcpy(__dest,__src,0xa0);
      puVar1 = (undefined4 *)((long)__dest + 0xb0);
      *(undefined4 **)((long)__dest + 0xa0) = puVar1;
      *(undefined4 *)((long)__dest + 0xa8) = 0;
      *(undefined4 *)((long)__dest + 0xac) = 0x80000004;
      if (lVar9 != lVar3) {
        *(undefined8 *)((long)__dest + 0xa0) = 0;
        *(undefined4 *)((long)__dest + 0xa8) = *(undefined4 *)((long)__src + 0xa8);
        *(undefined4 *)((long)__dest + 0xac) = *(undefined4 *)((long)__src + 0xac);
        puVar4 = *(undefined4 **)((long)__src + 0xa0);
        if ((undefined4 *)((long)__src + 0xb0) == puVar4) {
          *(undefined4 **)((long)__dest + 0xa0) = puVar1;
          *puVar1 = *puVar4;
          *(undefined4 *)((long)__dest + 0xb4) = *(undefined4 *)((long)__src + 0xb4);
          *(undefined4 *)((long)__dest + 0xb8) = *(undefined4 *)((long)__src + 0xb8);
          *(undefined4 *)((long)__dest + 0xbc) = *(undefined4 *)((long)__src + 0xbc);
        }
        else {
          *(undefined4 **)((long)__dest + 0xa0) = puVar4;
          *(undefined4 **)((long)__src + 0xa0) = (undefined4 *)((long)__src + 0xb0);
          *(undefined4 *)((long)__src + 0xac) = 0x80000004;
        }
        *(undefined4 *)((long)__src + 0xa8) = 0;
      }
      puVar1 = (undefined4 *)((long)__dest + 0xd0);
      *(undefined4 **)((long)__dest + 0xc0) = puVar1;
      *(undefined4 *)((long)__dest + 200) = 0;
      *(undefined4 *)((long)__dest + 0xcc) = 0x80000004;
      if (__src != __dest) {
        *(undefined8 *)((long)__dest + 0xc0) = 0;
        *(undefined4 *)((long)__dest + 200) = *(undefined4 *)((long)__src + 200);
        *(undefined4 *)((long)__dest + 0xcc) = *(undefined4 *)((long)__src + 0xcc);
        puVar4 = *(undefined4 **)((long)__src + 0xc0);
        if ((undefined4 *)((long)__src + 0xd0) == puVar4) {
          *(undefined4 **)((long)__dest + 0xc0) = puVar1;
          *puVar1 = *puVar4;
          *(undefined4 *)((long)__dest + 0xd4) = *(undefined4 *)((long)__src + 0xd4);
          *(undefined4 *)((long)__dest + 0xd8) = *(undefined4 *)((long)__src + 0xd8);
          *(undefined4 *)((long)__dest + 0xdc) = *(undefined4 *)((long)__src + 0xdc);
        }
        else {
          *(undefined4 **)((long)__dest + 0xc0) = puVar4;
          *(undefined4 **)((long)__src + 0xc0) = (undefined4 *)((long)__src + 0xd0);
          *(undefined4 *)((long)__src + 0xcc) = 0x80000004;
        }
        *(undefined4 *)((long)__src + 200) = 0;
      }
      memcpy((void *)((long)__dest + 0xe0),(void *)((long)__src + 0xe0),0x38);
      puVar2 = PTR_PTR_047d1a50;
      iVar7 = iVar7 + -1;
      lVar8 = lVar8 + 0x120;
    } while (iVar7 != 0);
    puVar6 = (uint *)(lVar9 + 0xcc);
    do {
      puVar6[-1] = 0;
      if ((-1 < (int)*puVar6) && (*(long *)(puVar6 + -3) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))(puVar2,*(long *)(puVar6 + -3),(ulong)*puVar6 << 2);
      }
      puVar6[-3] = 0;
      puVar6[-2] = 0;
      *puVar6 = 0x80000000;
      puVar6[-9] = 0;
      if ((-1 < (int)puVar6[-8]) && (*(long *)(puVar6 + -0xb) != 0)) {
        (**(code **)(*(long *)puVar2 + 0x20))
                  (puVar2,*(long *)(puVar6 + -0xb),(ulong)puVar6[-8] << 2);
      }
      puVar6[-0xb] = 0;
      puVar6[-10] = 0;
      iVar5 = iVar5 + -1;
      puVar6[-8] = 0x80000000;
      puVar6 = puVar6 + 0x48;
    } while (iVar5 != 0);
  }
  if (-1 < *(int *)((long)param_1 + 0xc)) {
    (**(code **)(PTR_DAT_047d1a08 + 8))((char)param_2[1],*param_1,0);
  }
  *(int *)((long)param_1 + 0xc) = (int)param_3;
  *param_1 = lVar3;
  return;
}


