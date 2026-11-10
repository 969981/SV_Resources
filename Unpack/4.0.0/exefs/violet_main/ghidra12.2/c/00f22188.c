/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f22188; name: FUN_00f22188
 */


void FUN_00f22188(undefined8 param_1,long param_2,long param_3,uint param_4,char param_5)

{
  char cVar1;
  undefined *puVar2;
  int *piVar3;
  long lVar4;
  char *pcVar5;
  ulong uVar6;
  int local_58 [4];
  int local_48 [4];
  undefined4 local_38 [2];
  
  FUN_00f220f4(local_48);
  puVar2 = PTR_DAT_047d0860;
  if (local_48[0] == 0) {
    if ((((param_3 != 0) && (param_4 != 0)) && (param_4 <= *(uint *)(param_2 + 0xa0))) &&
       (param_5 != -1)) {
      lVar4 = *(long *)PTR_DAT_047d0860;
      if ((ulong)*(ushort *)(lVar4 + 0x50) != 0) {
        pcVar5 = *(char **)(param_2 + 0x98);
        uVar6 = 0;
LAB_00f22200:
        if (pcVar5[uVar6] != param_5) goto code_r0x00f2220c;
        uVar6 = 0;
        cVar1 = *pcVar5;
        while( true ) {
          if ((cVar1 != -1) && (cVar1 != param_5)) {
            *(undefined1 *)(*(long *)(param_2 + 0xc0) + uVar6) = 1;
            pcVar5[uVar6] = -1;
            lVar4 = *(long *)puVar2;
          }
          uVar6 = uVar6 + 1;
          if (*(ushort *)(lVar4 + 0x50) <= uVar6) break;
          pcVar5 = *(char **)(param_2 + 0x98);
          cVar1 = pcVar5[uVar6];
        }
        *(long *)(param_2 + 0x80) = param_3;
        *(uint *)(param_2 + 0x90) = param_4;
        *(undefined1 *)(param_2 + 0x78) = 1;
        *(char *)(param_2 + 0xa4) = param_5;
        *(undefined4 *)(param_2 + 0xa8) = 0;
        *(undefined2 *)(param_2 + 0xb8) = 0;
        *(undefined1 *)(param_2 + 0xba) = 0;
        local_58[0] = 0;
        goto LAB_00f22224;
      }
    }
LAB_00f22218:
    local_58[0] = 0x10407;
LAB_00f22224:
    local_38[0] = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant
              ((ErrorResultVariant *)((ulong)local_58 | 4),(Result *)local_38);
    piVar3 = local_58;
  }
  else {
    piVar3 = local_48;
  }
  FUN_00cbd7c0(param_1,piVar3);
  return;
code_r0x00f2220c:
  uVar6 = uVar6 + 1;
  if (*(ushort *)(lVar4 + 0x50) == uVar6) goto LAB_00f22218;
  goto LAB_00f22200;
}


