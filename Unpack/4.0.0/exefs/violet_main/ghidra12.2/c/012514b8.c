/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 012514b8; name: FUN_012514b8
 */


uint FUN_012514b8(long param_1,undefined8 param_2,int *param_3)

{
  int iVar1;
  byte bVar2;
  int *piVar3;
  int iVar4;
  long lVar5;
  long *plVar6;
  undefined8 uVar7;
  uint uVar8;
  ulong uVar9;
  uint local_58 [2];
  undefined8 local_50;
  undefined2 local_48;
  
  lVar5 = FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310));
  uVar8 = 0;
  if (lVar5 != 0) {
    bVar2 = *(byte *)(param_3 + 0x908);
    uVar8 = (uint)bVar2;
    if (bVar2 != 0) {
      uVar9 = 0;
      piVar3 = param_3;
      do {
        if (((uint)uVar9 & 0xff) < uVar8) {
          iVar1 = piVar3[2];
          plVar6 = (long *)FUN_0106fc68(*(undefined8 *)(*(long *)(param_1 + 0x10) + 0x310));
          iVar4 = (**(code **)(*plVar6 + 0x98))();
          if (iVar1 == iVar4) {
            return piVar3[0x23] + 1;
          }
          uVar8 = (uint)*(byte *)(param_3 + 0x908);
        }
        uVar9 = uVar9 + 1;
        piVar3 = piVar3 + 0x23;
      } while (uVar9 < (byte)uVar8);
    }
    local_48 = 0x102;
    local_50 = param_2;
    uVar7 = FUN_029838f4(*(undefined8 *)(param_1 + 0x78));
    FUN_0123ecdc(uVar7,local_58,&local_50);
    uVar8 = local_58[0];
  }
  return uVar8;
}


