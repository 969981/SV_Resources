/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00514600; name: FUN_00514600
 */


void FUN_00514600(long *param_1)

{
  undefined *puVar1;
  long lVar2;
  int iVar3;
  byte *pbVar4;
  long lVar5;
  long lVar6;
  
  puVar1 = PTR_LAB_047cba48;
  lVar5 = (param_1[1] - *param_1) * 0x10000000 >> 0x20;
  lVar6 = lVar5 * 0x10;
  lVar2 = *param_1 + lVar6;
  iVar3 = *(int *)(lVar2 + -0xc);
  if (iVar3 == 4) goto LAB_0051466c;
  do {
    if ((iVar3 == 3) && (pbVar4 = *(byte **)(lVar2 + -8), pbVar4 != (byte *)0x0)) {
      if ((*pbVar4 & 1) != 0) {
        FUN_0049e790(puVar1,*(undefined8 *)(pbVar4 + 0x10));
      }
      FUN_0049e790(puVar1,pbVar4);
    }
    while( true ) {
      if (lVar5 < 2) {
        param_1[1] = *param_1;
        return;
      }
      lVar5 = lVar5 + -1;
      lVar6 = lVar6 + -0x10;
      lVar2 = *param_1 + lVar6;
      iVar3 = *(int *)(lVar2 + -0xc);
      if (iVar3 != 4) break;
LAB_0051466c:
      FUN_00515bcc(*(undefined8 *)(lVar2 + -8));
    }
  } while( true );
}


