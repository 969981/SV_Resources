/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 034ac08c; name: FUN_034ac08c
 */


uint FUN_034ac08c(long param_1,undefined8 param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  long *plVar5;
  float fVar6;
  undefined8 local_40;
  undefined4 local_38;
  undefined4 local_30;
  undefined1 local_28;
  undefined1 local_20;
  undefined8 local_18;
  
  uVar3 = *(ushort *)(param_1 + 0xda) & 0x3ff;
  if (((*(undefined8 **)(param_1 + 0x40) != (undefined8 *)0x0) &&
      ((*(ushort *)(param_1 + 0xda) & 0x3ff) != 0)) &&
     (((uint)**(undefined8 **)(param_1 + 0x40) >> 0x10 & 1) != 0)) {
    local_38 = 0;
    fVar6 = 0.0;
    local_30 = 0;
    local_28 = 0xff;
    local_20 = 0xff;
    local_18 = 0;
    lVar4 = *(long *)PTR_DAT_047e6fd8;
    uVar3 = *(uint *)(lVar4 + 0x20);
    if (uVar3 != 0) {
      uVar1 = (int)(param_1 + 0x38) + 0x10;
      uVar2 = 0;
      if (uVar3 != 0) {
        uVar2 = uVar1 / uVar3;
      }
      for (plVar5 = *(long **)(*(long *)(lVar4 + 0x18) + (ulong)(uVar1 - uVar2 * uVar3) * 8);
          plVar5 != (long *)0x0; plVar5 = (long *)plVar5[2]) {
        if ((*plVar5 == param_1 + 0x38) && ((int)plVar5[1] == 0x10)) {
          local_40 = param_2;
          if (*(int *)((long)plVar5 + 0x4c) == 3) {
            fVar6 = (float)FUN_0348209c();
          }
          else {
            fVar6 = (float)FUN_03482338(lVar4,plVar5,&local_40);
          }
          break;
        }
      }
    }
    uVar3 = (uint)fVar6;
  }
  return uVar3;
}


