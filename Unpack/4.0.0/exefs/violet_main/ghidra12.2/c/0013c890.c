/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 0013c890; name: FUN_0013c890
 */


void FUN_0013c890(undefined8 param_1,long param_2,ulong param_3,undefined8 *param_4)

{
  int *piVar1;
  uint uVar2;
  char cVar3;
  ulong uVar4;
  undefined8 *puVar5;
  ulong local_20;
  undefined1 local_18;
  
  uVar2 = *(uint *)(param_2 + 0xc);
  uVar4 = param_3 - 1;
  if (uVar2 <= uVar4) {
    if ((((uVar2 & uVar2 - 1) == 0) || (-1 < *(char *)(param_2 + 10))) ||
       ((uVar2 + 1 != param_3 &&
        (uVar2 = uVar2 | uVar2 >> 1, uVar2 = uVar2 | uVar2 >> 2, uVar2 = uVar2 | uVar2 >> 4,
        uVar2 = uVar2 | uVar2 >> 8, (uVar2 | uVar2 >> 0x10) + 1 <= uVar4)))) {
      puVar5 = (undefined8 *)
               (*(long *)(param_2 + 0x18) +
               (long)(int)((uint)param_3 &
                          (-1 << (ulong)(*(byte *)(param_2 + 0xb) & 0x1f) ^ 0xffffffffU)) * 0x18);
      do {
        if ((*(char *)((long)puVar5 + 9) == '\x03') && (puVar5[2] == param_3)) {
          cVar3 = *(char *)(puVar5 + 1);
          goto joined_r0x0013c98c;
        }
        piVar1 = (int *)((long)puVar5 + 0xc);
        puVar5 = puVar5 + (long)*piVar1 * 3;
      } while (*piVar1 != 0);
      puVar5 = &DAT_03cb6488;
      cVar3 = DAT_03cb6490;
      goto joined_r0x0013c98c;
    }
    *(uint *)(param_2 + 0xc) = (uint)param_3;
  }
  puVar5 = (undefined8 *)(*(long *)(param_2 + 0x10) + uVar4 * 0x10);
  cVar3 = *(char *)(puVar5 + 1);
joined_r0x0013c98c:
  if (cVar3 == ' ') {
    local_18 = 3;
    local_20 = param_3;
    FUN_0013cb10(param_1,param_2,&local_20);
    return;
  }
  *puVar5 = *param_4;
  *(undefined1 *)(puVar5 + 1) = *(undefined1 *)(param_4 + 1);
  return;
}


