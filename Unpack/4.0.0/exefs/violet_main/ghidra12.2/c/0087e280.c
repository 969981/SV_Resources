/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087e280; name: FUN_0087e280
 */


undefined4 FUN_0087e280(uint *param_1,long param_2,undefined4 param_3,undefined8 param_4)

{
  int iVar1;
  undefined4 uVar2;
  ulong uVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  
  uVar2 = 0x80260201;
  if ((param_1 != (uint *)0x0) && (param_2 != 0)) {
    if (*param_1 != 0) {
      uVar3 = 0;
      uVar2 = 0x80800008;
      puVar5 = (undefined8 *)(*(long *)(param_2 + 8) + 8);
      puVar4 = (undefined8 *)(*(long *)(param_1 + 2) + 8);
      do {
        switch(*(undefined4 *)(puVar4 + -1)) {
        case 0:
          iVar1 = FUN_008833c0(*puVar4,*puVar5,param_3,param_4);
          break;
        case 1:
          iVar1 = FUN_0087f6a0(*puVar4,*puVar5,param_3,param_4);
          break;
        case 2:
          iVar1 = FUN_00882b00(*puVar4,*puVar5,param_3,param_4);
          goto joined_r0x0087e2f8;
        case 3:
          iVar1 = FUN_00881560(*puVar4,*puVar5,param_3,param_4);
joined_r0x0087e2f8:
          if (iVar1 == 0) goto LAB_0087e2fc;
        default:
          goto switchD_0087e32c_default;
        }
        if (iVar1 != 0) {
          return 0x80800008;
        }
LAB_0087e2fc:
        uVar3 = uVar3 + 1;
        puVar4 = puVar4 + 2;
        puVar5 = puVar5 + 2;
      } while (uVar3 < *param_1);
    }
    uVar2 = 0;
  }
switchD_0087e32c_default:
  return uVar2;
}


