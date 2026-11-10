/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007e1254; name: FUN_007e1254
 */


undefined8 FUN_007e1254(ushort *param_1,long param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  long *plVar3;
  ushort uVar4;
  byte bVar5;
  undefined8 uVar6;
  uint uVar7;
  long lVar8;
  ulong uVar9;
  long lVar10;
  ulong uVar11;
  undefined8 uVar12;
  undefined4 local_38 [4];
  undefined4 local_28 [2];
  
  local_38[0] = 0;
  local_28[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_38 | 4),(Result *)local_28);
  uVar12 = *(undefined8 *)(param_1 + 4);
  uVar6 = FUN_007de240(param_2 + 8);
  bVar5 = FUN_007e10ac(uVar12,uVar6);
  if (bVar5 == 0xff) {
    return 0;
  }
  uVar4 = *param_1;
  uVar7 = (uint)uVar4;
  if (*(char *)(param_2 + 0x3a) == '\x03') {
    if (uVar7 != 0) {
      lVar8 = *(long *)(param_1 + 0xc);
      uVar9 = (ulong)bVar5;
      lVar10 = *(long *)(lVar8 + uVar9 * 8);
      if (uVar7 == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 0;
        do {
          puVar2 = (undefined1 *)(lVar10 + uVar11);
          plVar3 = (long *)(lVar8 + uVar11 * 8);
          uVar11 = uVar11 + 2;
          *puVar2 = 0;
          *(undefined1 *)(*plVar3 + uVar9) = 0;
          puVar2[1] = 0;
          *(undefined1 *)(plVar3[1] + uVar9) = 0;
        } while (((ulong)uVar4 & 0xfffe) != uVar11);
      }
      if ((uVar4 & 1) == 0) {
        return 0;
      }
      *(undefined1 *)(lVar10 + uVar11) = 0;
      *(undefined1 *)(*(long *)(lVar8 + uVar11 * 8) + uVar9) = 0;
      return 0;
    }
  }
  else if (uVar7 != 0) {
    uVar9 = 0;
    do {
      if (*(char *)(*(long *)(*(long *)(param_1 + 0xc) + (ulong)bVar5 * 8) + (uVar9 & 0xff)) != '\0'
         ) {
        return 1;
      }
      uVar1 = (int)uVar9 + 1;
      uVar9 = (ulong)uVar1;
    } while ((uVar1 & 0xff) < uVar7);
  }
  return 0;
}


