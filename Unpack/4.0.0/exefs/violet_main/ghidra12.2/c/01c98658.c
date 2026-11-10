/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 01c98658; name: FUN_01c98658
 */


void FUN_01c98658(undefined8 *param_1,long param_2)

{
  undefined8 uVar1;
  undefined1 uVar2;
  byte bVar3;
  undefined8 uVar4;
  char local_40 [8];
  undefined8 local_38;
  
  FUN_01ecce00(local_40);
  uVar1 = 0;
  if (local_40[0] != '\0') {
    uVar1 = local_38;
  }
  *param_1 = uVar1;
  *(short *)(param_1 + 1) = (short)*(undefined4 *)(param_2 + 8);
  *(ushort *)((long)param_1 + 10) = (ushort)*(byte *)(param_2 + 0x15);
  uVar2 = *(undefined1 *)(param_2 + 0x11);
  *(undefined1 *)((long)param_1 + 0xc) = uVar2;
  bVar3 = FUN_01c879cc(param_2);
  *(byte *)((long)param_1 + 0xd) = ~bVar3 & 1;
  switch(uVar2) {
  case 0:
                    /* WARNING: Subroutine does not return */
    nn::diag::detail::AbortImpl
              ("false","ToViewData",
               "C:/jenkins/workspace/sudachi/rom/rom_build/programs/prog/app/src/network/net_contents/mystery_gift/mystery_gift_view_data.cpp"
               ,0x5d);
  case 1:
    FUN_01edd810(param_1 + 2,param_2 + 0x18);
    break;
  case 2:
    uVar1 = *(undefined8 *)(param_2 + 0x18);
    uVar4 = *(undefined8 *)(param_2 + 0x28);
    param_1[3] = *(undefined8 *)(param_2 + 0x20);
    param_1[4] = uVar4;
    param_1[2] = uVar1;
    break;
  case 3:
  case 5:
    *(undefined4 *)(param_1 + 2) = *(undefined4 *)(param_2 + 0x18);
    break;
  case 4:
    memcpy(param_1 + 2,(void *)(param_2 + 0x18),0x60);
  }
  return;
}


