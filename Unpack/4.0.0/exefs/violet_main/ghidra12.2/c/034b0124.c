/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034b0124; name: FUN_034b0124
 */


undefined8 FUN_034b0124(long param_1,long param_2,ulong param_3)

{
  int iVar1;
  uint uVar2;
  void *__dest;
  undefined8 uVar3;
  uint uVar4;
  void *__src;
  void *pvVar5;
  long lVar6;
  uint uVar7;
  undefined8 local_68;
  
  uVar2 = FUN_034ac08c(param_1,0);
  if (*(long *)(param_1 + 0x90) == 0) {
    FUN_034abe20(param_1);
  }
  if ((uVar2 & 0xffff) == 0) {
    return 1;
  }
  pvVar5 = *(void **)(param_2 + 8);
  if ((pvVar5 == (void *)0x0) || (lVar6 = *(long *)(param_1 + 0x90), lVar6 == 0)) goto LAB_034b023c;
  uVar4 = *(uint *)((long)pvVar5 + 0x10);
  uVar7 = *(uint *)((long)pvVar5 + 0x14);
  if (uVar7 <= uVar4) {
    iVar1 = uVar7 + (uVar7 >> 1);
    if (uVar7 == 0) {
      iVar1 = 1;
    }
    uVar7 = iVar1 + uVar7;
    __dest = pvVar5;
    if (uVar7 < 2) {
LAB_034b01dc:
      if (__dest == (void *)0x0) goto LAB_034b023c;
    }
    else {
      __src = *(void **)((long)pvVar5 + 8);
      if (pvVar5 != __src) {
        __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x28))(0,__src,(ulong)uVar7 << 3,1);
        goto LAB_034b01dc;
      }
      __dest = (void *)(**(code **)(PTR_DAT_047e2fd0 + 0x18))(0,(ulong)uVar7 << 3,1);
      if (__dest == (void *)0x0) goto LAB_034b023c;
      memcpy(__dest,__src,((ulong)uVar4 & 0x1fffffff) << 3);
    }
    *(void **)((long)pvVar5 + 8) = __dest;
    *(uint *)((long)pvVar5 + 0x14) = uVar7;
  }
  if (uVar4 < uVar7) {
    uVar7 = *(uint *)((long)pvVar5 + 0x10);
    *(uint *)((long)pvVar5 + 0x10) = uVar7 + 1;
    if (*(long *)((long)pvVar5 + 8) != 0) {
      *(long *)(*(long *)((long)pvVar5 + 8) + (ulong)uVar7 * 8) = lVar6 + 0x60;
    }
  }
LAB_034b023c:
  if ((((param_3 & 1) != 0) && (*(char *)(param_2 + 0x29) != '\0')) &&
     (*(short *)(param_2 + 0x26) == 0)) {
    lVar6 = *(long *)(param_1 + 0x90);
    if (lVar6 == 0) {
      uVar7 = 0;
      uVar4 = 0;
    }
    else {
      uVar7 = (uint)*(ushort *)(lVar6 + 0x88);
      uVar4 = (uint)*(ushort *)(lVar6 + 0x8a);
    }
    if ((int)(uVar2 & 0xffff) <= (int)(uVar7 - uVar4)) {
      local_68 = 0;
      uVar3 = FUN_034e8098(*(undefined4 *)(param_2 + 0x20),lVar6 + 0x60,uVar2,0,
                           *(uint *)(param_1 + 0xda) >> 10 & 1,*(uint *)(param_1 + 0xda) >> 0xb & 1,
                           &local_68,1);
      *(short *)(param_2 + 0x26) = *(short *)(param_2 + 0x26) + 1;
      return uVar3;
    }
  }
  return 1;
}


