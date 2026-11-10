/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 03497db4; name: FUN_03497db4
 */


void FUN_03497db4(long *param_1,long *param_2,void *param_3)

{
  int iVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  uint uVar5;
  void *__dest;
  uint uVar6;
  long lVar7;
  void *__src;
  long lVar8;
  uint uVar9;
  
  uVar9 = *(uint *)(param_1 + 1);
  if (uVar9 != 0) {
    uVar5 = 0;
    uVar6 = (uint)*param_2;
    if (uVar9 != 0) {
      uVar5 = uVar6 / uVar9;
    }
    for (lVar8 = *(long *)(*param_1 + (ulong)(uVar6 - uVar5 * uVar9) * 8); lVar8 != 0;
        lVar8 = *(long *)(lVar8 + 0x18)) {
      if (*(long *)(lVar8 + 0x10) == *param_2) {
        lVar3 = *param_2;
        lVar4 = param_2[1];
        lVar7 = param_2[2];
        uVar5 = *(uint *)((long)param_3 + 0x108);
        uVar9 = *(uint *)((long)param_3 + 0x10c);
        if (uVar9 <= uVar5) {
          iVar1 = uVar9 + (uVar9 >> 1);
          if (uVar9 == 0) {
            iVar1 = 1;
          }
          uVar9 = iVar1 + uVar9;
          __dest = param_3;
          if (8 < uVar9) {
            __src = *(void **)((long)param_3 + 0x100);
            if (param_3 == __src) {
              __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar9 << 5,1);
              if (__dest == (void *)0x0) {
                return;
              }
              memcpy(__dest,__src,((ulong)uVar5 & 0x7ffffff) << 5);
            }
            else {
              __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar9 << 5,1);
              if (__dest == (void *)0x0) {
                return;
              }
            }
          }
          *(void **)((long)param_3 + 0x100) = __dest;
          *(uint *)((long)param_3 + 0x10c) = uVar9;
        }
        if (uVar9 <= uVar5) {
          return;
        }
        uVar9 = *(uint *)((long)param_3 + 0x108);
        *(uint *)((long)param_3 + 0x108) = uVar9 + 1;
        if (*(long *)((long)param_3 + 0x100) == 0) {
          return;
        }
        plVar2 = (long *)(*(long *)((long)param_3 + 0x100) + (ulong)uVar9 * 0x20);
        *plVar2 = lVar3;
        plVar2[1] = lVar4;
        plVar2[2] = 1;
        plVar2[2] = lVar7;
        plVar2[3] = lVar8;
        return;
      }
    }
  }
  return;
}


