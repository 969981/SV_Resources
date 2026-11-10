/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01e5f0dc; name: FUN_01e5f0dc
 */


void FUN_01e5f0dc(undefined8 *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  char *__s;
  size_t sVar7;
  void *__dest;
  ushort *puVar8;
  long *plVar9;
  void *local_80;
  long *local_78;
  ulong local_70;
  undefined8 local_68;
  
  if (*(long *)(param_2 + 0x48) != 0) {
    if (((*PTR_DAT_047d4c98 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_047d4c98), iVar5 != 0)) {
      FUN_00100190(PTR_LAB_047d4cb0,PTR_DAT_047d4ca0,&PTR_LOOP_04483000);
      __cxa_guard_release(PTR_DAT_047d4c98);
    }
    *(undefined8 *)PTR_DAT_047d4ca8 = *(undefined8 *)PTR_DAT_047d4ca0;
    lVar6 = FUN_01e5f7a8();
    if ((lVar6 != 0) && (__s = (char *)FUN_01e5f910(), __s != (char *)0x0)) {
      uVar2 = FUN_01e5f91c(lVar6);
      uVar3 = FUN_0168d1b0();
      uVar4 = FUN_014c0588(*(undefined8 *)(param_2 + 0x48));
      sVar7 = strlen(__s);
      plVar9 = *(long **)(param_2 + 0x40);
      uVar1 = (int)sVar7 + (uVar4 & 0xffff) * 0x148 + 9;
      __dest = (void *)(**(code **)(*plVar9 + 0x10))(plVar9,(ulong)uVar1,8);
      local_68 = 8;
      local_80 = __dest;
      local_78 = plVar9;
      local_70 = (ulong)uVar1;
      memcpy(__dest,__s,sVar7 + 1);
      puVar8 = (ushort *)((long)__dest + sVar7 + 1);
      *puVar8 = (ushort)(uVar2 >> 8) & 0xff | (ushort)((uVar2 & 0xff00ff) << 8);
      puVar8[1] = (ushort)(uVar3 >> 8) & 0xff | (ushort)((uVar3 & 0xff00ff) << 8);
      puVar8[2] = 0x100;
      puVar8[3] = (ushort)(uVar4 >> 8) & 0xff | (ushort)((uVar4 & 0xff00ff) << 8);
      iVar5 = FUN_014c0588(*(undefined8 *)(param_2 + 0x48));
      if (iVar5 != 0) {
        uVar2 = 0;
        puVar8 = puVar8 + 4;
        do {
          lVar6 = (**(code **)(**(long **)(param_2 + 0x48) + 0x68))
                            (*(long **)(param_2 + 0x48),uVar2);
          if (lVar6 != 0) {
            thunk_FUN_021f1018(lVar6,puVar8);
            puVar8 = puVar8 + 0xa4;
          }
          uVar2 = uVar2 + 1;
          uVar3 = FUN_014c0588(*(undefined8 *)(param_2 + 0x48));
        } while (uVar2 < uVar3);
      }
      local_80 = (void *)0x0;
      *(uint *)(param_1 + 4) = uVar1;
      param_1[2] = local_70;
      param_1[3] = local_68;
      *param_1 = __dest;
      param_1[1] = local_78;
      FUN_01e5f508(&local_80);
      return;
    }
  }
  *(undefined4 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = 0;
  param_1[1] = 0;
  return;
}


