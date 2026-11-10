/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 007ef588; name: FUN_007ef588
 */


void FUN_007ef588(undefined8 param_1,long *param_2,long param_3,uint param_4,undefined2 param_5)

{
  uint uVar1;
  uint uVar2;
  ushort uVar3;
  long lVar4;
  long *plVar5;
  undefined4 uVar6;
  ulong uVar7;
  uint uVar8;
  ulong uVar9;
  ulong local_58 [2];
  undefined4 local_48 [2];
  
  if ((short)param_2[5] == 0) {
    uVar6 = 0x1040c;
  }
  else {
    if ((param_3 != 0) && (param_2[1] != param_3)) {
      uVar9 = (ulong)param_4;
      if (((uint)*(byte *)(param_2 + 2) != (param_4 & 0xff)) &&
         (*(long *)(param_2[8] + (uVar9 & 0xff) * 8) == 0)) {
        lVar4 = (**(code **)(*param_2 + 0x40))(param_2,uVar9);
        if (*(char *)(lVar4 + 0x1f) == '\0') {
          if ((ulong)*(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50) != 0) {
            uVar7 = 0;
            do {
              if (*(long *)(param_2[8] + uVar7 * 8) == param_3) goto LAB_007ef658;
              uVar7 = uVar7 + 1;
            } while (uVar7 < *(ushort *)(*(long *)PTR_DAT_047d0860 + 0x50));
          }
          *(long *)(param_2[8] + (uVar9 & 0xff) * 8) = param_3;
          plVar5 = (long *)(**(code **)(*param_2 + 0x40))(param_2,uVar9);
          (**(code **)(*plVar5 + 0x10))();
          lVar4 = (**(code **)(*param_2 + 0x40))(param_2,uVar9);
          uVar8 = (param_4 & 0xff) >> 5;
          *(char *)(lVar4 + 0x24) = (char)param_4;
          *(undefined2 *)(lVar4 + 0x26) = param_5;
          *(uint *)((long)param_2 + (ulong)uVar8 * 4 + 0x74) =
               *(uint *)((long)param_2 + (ulong)uVar8 * 4 + 0x74) | 1 << (ulong)(param_4 & 0x1f);
          if (*(short *)((long)param_2 + 0x32) != 0) {
            uVar8 = 0;
            do {
              local_58[0] = 0;
              FUN_007935cc(local_58);
              uVar1 = *(int *)((long)param_2 + 0x2c) + (uVar8 & 0xffff);
              uVar2 = 0;
              if (*(ushort *)(param_2 + 5) <= uVar1) {
                uVar2 = (uint)*(ushort *)(param_2 + 5);
              }
              *(ulong *)(param_2[4] + (ulong)(uVar1 - uVar2) * 0x5d0 + 8) = local_58[0];
              uVar3 = *(ushort *)((long)param_2 + 0x32);
              if ((uVar8 & 0xffff) < (uint)uVar3) {
                uVar8 = uVar8 + 1;
              }
            } while ((uVar8 & 0xffff) <= (uint)uVar3 && (uint)uVar3 != (uVar8 & 0xffff));
          }
          local_58[0] = local_58[0] & 0xffffffff00000000;
          goto LAB_007ef600;
        }
LAB_007ef658:
        uVar6 = 0x10408;
        goto LAB_007ef5fc;
      }
    }
    uVar6 = 0x10407;
  }
LAB_007ef5fc:
  local_58[0] = CONCAT44(local_58[0]._4_4_,uVar6);
LAB_007ef600:
  local_48[0] = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant
            ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_48);
  FUN_00cbd7c0(param_1,local_58);
  return;
}


