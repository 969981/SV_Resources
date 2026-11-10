/* Recovered by Ghidra 12.2, not original Nintendo source.
 * SV 4.0.0 original ELF SHA256: 84e1e6c1ae3d4122eb736045cda82d075a189c718e9ba024a9fa90ee726f7d30
 * Ghidra function entry: 00f6d584; name: FUN_00f6d584
 */


void FUN_00f6d584(long param_1)

{
  char cVar1;
  size_t sVar2;
  void *pvVar3;
  void *pvVar4;
  void *pvVar5;
  
  if (*(char *)(param_1 + 0x78) == '\0') {
    if (*(long *)(param_1 + 0xb8) != *(long *)(param_1 + 0xc0)) {
      *(long *)(param_1 + 0xc0) = *(long *)(param_1 + 0xb8);
    }
    pvVar4 = *(void **)(param_1 + 0x88);
    pvVar3 = *(void **)(param_1 + 0x80);
    if (*(void **)(param_1 + 0x80) != pvVar4) {
      do {
        pvVar5 = (void *)((long)pvVar3 + 0x18);
        if (*(char *)((long)pvVar3 + 0x10) == '\0') {
          do {
            sVar2 = (long)pvVar4 - (long)pvVar5;
            if (sVar2 == 0) {
              *(void **)(param_1 + 0x88) = pvVar3;
              goto LAB_00f6d5d0;
            }
            memmove(pvVar3,pvVar5,sVar2);
            pvVar4 = (void *)((long)pvVar3 + sVar2);
            *(void **)(param_1 + 0x88) = pvVar4;
          } while (*(char *)((long)pvVar3 + 0x10) == '\0');
        }
        pvVar3 = pvVar5;
      } while (pvVar5 != pvVar4);
    }
  }
  else {
    pvVar3 = *(void **)(param_1 + 0x88);
    pvVar4 = *(void **)(param_1 + 0x80);
LAB_00f6d634:
    pvVar5 = pvVar4;
    if (pvVar5 != pvVar3) {
      pvVar4 = (void *)((long)pvVar5 + 0x18);
      if (*(char *)((long)pvVar5 + 0x10) == '\0') {
        cVar1 = *(char *)((long)pvVar5 + 8);
        while (cVar1 == '\0') {
          sVar2 = (long)pvVar3 - (long)pvVar4;
          if (sVar2 == 0) {
            *(void **)(param_1 + 0x88) = pvVar5;
            goto LAB_00f6d5d0;
          }
          memmove(pvVar5,pvVar4,sVar2);
          pvVar3 = (void *)((long)pvVar5 + sVar2);
          *(void **)(param_1 + 0x88) = pvVar3;
          if (*(char *)((long)pvVar5 + 0x10) != '\0') {
            break;
          }
          cVar1 = *(char *)((long)pvVar5 + 8);
        }
      }
      goto LAB_00f6d634;
    }
  }
LAB_00f6d5d0:
  pvVar3 = *(void **)(param_1 + 0xc0);
  pvVar4 = *(void **)(param_1 + 0xb8);
  do {
    do {
      pvVar5 = pvVar4;
      if (pvVar5 == pvVar3) {
        return;
      }
      pvVar4 = (void *)((long)pvVar5 + 0x18);
    } while (*(char *)((long)pvVar5 + 8) != '\0');
    do {
      sVar2 = (long)pvVar3 - (long)pvVar4;
      if (sVar2 == 0) {
        *(void **)(param_1 + 0xc0) = pvVar5;
        return;
      }
      memmove(pvVar5,pvVar4,sVar2);
      pvVar3 = (void *)((long)pvVar5 + sVar2);
      *(void **)(param_1 + 0xc0) = pvVar3;
    } while (*(char *)((long)pvVar5 + 8) == '\0');
  } while( true );
}


