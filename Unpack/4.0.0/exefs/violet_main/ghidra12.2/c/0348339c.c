/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0348339c; name: FUN_0348339c
 */


undefined8 FUN_0348339c(long param_1,void *param_2,uint param_3,uint *param_4,uint param_5)

{
  int iVar1;
  undefined *puVar2;
  undefined8 uVar3;
  void *__dest;
  long lVar4;
  uint *puVar5;
  ulong uVar6;
  uint uVar7;
  
  puVar2 = PTR_DAT_047e2fd0;
  if (*(long *)(param_1 + 0x18) != 0) {
    (**(code **)(PTR_DAT_047e2fd0 + 0x30))(2);
    *(undefined8 *)(param_1 + 0x18) = 0;
  }
  if (*(long *)(param_1 + 0x28) != 0) {
    (**(code **)(puVar2 + 0x30))(2);
    *(undefined8 *)(param_1 + 0x28) = 0;
  }
  uVar3 = 0x1f;
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000;
  if ((((param_4 != (uint *)0x0) && (param_2 != (void *)0x0)) && (param_3 != 0)) && (param_5 != 0))
  {
    __dest = (void *)(**(code **)(puVar2 + 0x10))(2,(ulong)(param_3 << 4));
    *(void **)(param_1 + 0x18) = __dest;
    if (__dest != (void *)0x0) {
      memcpy(__dest,param_2,(ulong)(param_3 << 4));
      *(uint *)(param_1 + 0x20) = param_3;
      lVar4 = (**(code **)(puVar2 + 0x10))(2,param_5 * 0x18);
      *(long *)(param_1 + 0x28) = lVar4;
      if (lVar4 != 0) {
        *(uint *)(param_1 + 0x30) = *(uint *)(param_1 + 0x30) & 0x80000000 | param_5 & 0x7fffffff;
        uVar7 = *param_4;
        *(uint *)(lVar4 + 8) = param_4[1];
        if (*param_4 < param_3) {
          lVar4 = 0;
          do {
            puVar5 = param_4 + 2;
            *(ulong *)(*(long *)(param_1 + 0x28) + lVar4) =
                 *(long *)(param_1 + 0x18) + (ulong)uVar7 * 0x10;
            *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0xc) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0x10) = 0;
            *(undefined4 *)(*(long *)(param_1 + 0x28) + lVar4 + 0x14) = 0;
            if ((ulong)param_5 * 0x18 == lVar4 + 0x18) {
              uVar3 = 1;
              goto LAB_0348350c;
            }
            uVar7 = *puVar5;
            *(uint *)(*(long *)(param_1 + 0x28) + lVar4 + 0x20) = param_4[3];
            lVar4 = lVar4 + 0x18;
            param_4 = puVar5;
          } while (*puVar5 < param_3);
        }
        uVar3 = 2;
        goto LAB_0348350c;
      }
    }
    uVar3 = 0x34;
  }
LAB_0348350c:
  uVar7 = *(uint *)(param_1 + 0x30);
  if ((uVar7 & 0x7fffffff) != 0) {
    lVar4 = 0;
    uVar6 = 0;
    do {
      iVar1 = *(int *)(*(long *)(param_1 + 0x28) + lVar4 + 8);
      if (0 < iVar1) {
        *(undefined4 *)
         (*(long *)(*(long *)(param_1 + 0x28) + lVar4) + (ulong)(iVar1 - 1) * 0x10 + 0xc) =
             *(undefined4 *)(param_1 + 0x14);
        uVar7 = *(uint *)(param_1 + 0x30);
      }
      uVar6 = uVar6 + 1;
      lVar4 = lVar4 + 0x18;
    } while (uVar6 < (uVar7 & 0x7fffffff));
  }
  return uVar3;
}


