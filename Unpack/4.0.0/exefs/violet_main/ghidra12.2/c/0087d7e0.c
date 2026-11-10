/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0087d7e0; name: FUN_0087d7e0
 */


undefined8
FUN_0087d7e0(long param_1,uint *param_2,undefined4 param_3,uint param_4,undefined8 param_5)

{
  int iVar1;
  undefined8 uVar2;
  uint uVar3;
  long lVar4;
  long lVar5;
  ulong uVar6;
  
  uVar2 = 0x80260201;
  if ((param_1 != 0) && (param_2 != (uint *)0x0)) {
    if (param_4 < 2) {
      if ((*(byte *)(param_1 + 0x48) & 1) == 0) {
        uVar2 = 0x80260203;
      }
      else {
        iVar1 = FUN_0087d930(param_1,param_4,param_5);
        uVar2 = 0x80800005;
        if (iVar1 == 0) {
          uVar3 = *param_2;
          if (uVar3 == 0) {
            uVar2 = 0;
          }
          else {
            lVar5 = 0;
            uVar6 = 0;
            do {
              iVar1 = *(int *)(*(long *)(param_2 + 2) + lVar5);
              if (*(int *)(param_1 + 0x58) == iVar1) {
                lVar4 = 0;
LAB_0087d8dc:
                lVar4 = param_1 + lVar4 * 0x48;
                iVar1 = (**(code **)(lVar4 + 0x80))
                                  (*(undefined8 *)(lVar4 + 0x60),
                                   *(undefined8 *)(*(long *)(param_2 + 2) + lVar5 + 8),param_3,
                                   param_5);
                if (iVar1 != 0) {
                  return 0x80800008;
                }
                uVar3 = *param_2;
              }
              else {
                if (*(int *)(param_1 + 0xa0) == iVar1) {
                  lVar4 = 1;
                  goto LAB_0087d8dc;
                }
                if (*(int *)(param_1 + 0xe8) == iVar1) {
                  lVar4 = 2;
                  goto LAB_0087d8dc;
                }
                if (*(int *)(param_1 + 0x130) == iVar1) {
                  lVar4 = 3;
                  goto LAB_0087d8dc;
                }
              }
              uVar6 = uVar6 + 1;
              uVar2 = 0;
              lVar5 = lVar5 + 0x10;
            } while (uVar6 < uVar3);
          }
        }
      }
    }
    else {
      uVar2 = 0x80260205;
    }
  }
  return uVar2;
}


