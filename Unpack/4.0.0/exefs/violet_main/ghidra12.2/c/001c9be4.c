/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 001c9be4; name: FUN_001c9be4
 */


undefined8 FUN_001c9be4(long *param_1,undefined8 param_2,undefined4 param_3,undefined4 *param_4)

{
  int iVar1;
  long lVar2;
  long lVar3;
  
  lVar3 = *param_1;
  *param_4 = 1;
  memset((long *)(lVar3 + 0x1f0),0,0x470);
  *(undefined8 *)(lVar3 + 0x650) = param_2;
  *(undefined4 *)(lVar3 + 0x658) = param_3;
  lVar2 = FUN_001e0430(0,"Content-Type: application/dns-message");
  *(long *)(lVar3 + 0x1f0) = lVar2;
  if (lVar2 != 0) {
    if (param_1[0x86] != 2) {
      iVar1 = FUN_001c9d00(lVar3,lVar3 + 0x1f8,1,param_2,*(undefined8 *)(lVar3 + 0xe58),
                           *(undefined8 *)(lVar3 + 0xd8),lVar2);
      if (iVar1 != 0) goto LAB_001c9ca4;
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      if (param_1[0x86] == 1) {
        return 0;
      }
      lVar2 = *(long *)(lVar3 + 0x1f0);
    }
    iVar1 = FUN_001c9d00(lVar3,lVar3 + 0x420,0x1c,param_2,*(undefined8 *)(lVar3 + 0xe58),
                         *(undefined8 *)(lVar3 + 0xd8),lVar2);
    if (iVar1 == 0) {
      *(int *)(lVar3 + 0x648) = *(int *)(lVar3 + 0x648) + 1;
      return 0;
    }
  }
LAB_001c9ca4:
  FUN_001e04f0(*(undefined8 *)(lVar3 + 0x1f0));
  *(undefined8 *)(lVar3 + 0x1f0) = 0;
  FUN_0278c964(*(undefined8 *)(lVar3 + 0x1f8));
  *(undefined8 *)(lVar3 + 0x1f8) = 0;
  FUN_0278c964(*(undefined8 *)(lVar3 + 0x420));
  *(undefined8 *)(lVar3 + 0x420) = 0;
  return 0;
}


